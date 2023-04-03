#include "yoloRunner.h"


/**
 * Constructor
 * 
 * @param[in]   model_path path to the xmodel file
 * @param[in]   prototxt_path prototxt file describes the models anchors, biases
 * @param[out]  YOLORunner runner object
*/
YOLORunner::YOLORunner(std::string model_path, std::string prototxt_path){

    /* Create a DPU Task */
    this->dpuTask = vitis::ai::DpuTask::create(model_path);

    /* get all input tensors */
    this->i_tensor = this->dpuTask->getInputTensor(0u);

    /* get all output tensors */
    this->o_tensor = this->dpuTask->getOutputTensor(0u);

    this->width = this->i_tensor[0].width;
    this->height = this->i_tensor[0].height;
    this->model_input_size = cv::Size(width, height);
    this->dpuTask->setMeanScaleBGR({0.0f, 0.0f, 0.0f},
                        {0.00390625f, 0.00390625f, 0.00390625f});

    /* create the prototxt */
    std::ifstream ifs(prototxt_path);
    std::string prototxt_contents = std::string(std::istreambuf_iterator<char>(ifs),std::istreambuf_iterator<char>());

    auto ok = google::protobuf::TextFormat::ParseFromString(prototxt_contents, &(this->model_prototxt));
    if (!ok) {
      std::cerr << "Set parameters failed!" << std::endl;
      abort();
    }
}

/**
 * Preprocessor
 * 
 * @param[in]   img original input image
 * @param[out]  resized image required by the DPU to run inference on
*/
cv::Mat YOLORunner::preprocess(cv::Mat img){

    cv::Mat resized_img;
    cv::resize(img, resized_img, this->model_input_size);
    return resized_img;
}

/**
 * YOLORunner run method sends images asynchronously for inference to the DPU
 * 
 * @param[in]   img image to run inference on
 * @param[out]  YOLOv3Result result object containing bounding boxes
*/
vitis::ai::YOLOv3Result YOLORunner::run(cv::Mat img){

    cv::Mat resized_img = this->preprocess(img);

    std::vector<int> input_cols = {img.cols};
    std::vector<int> input_rows = {img.rows};

    std::vector<cv::Mat> inputs = {resized_img};

    this->dpuTask->setImageRGB(inputs);
    this->dpuTask->run(0);

    auto results = vitis::ai::yolov3_post_process(
        i_tensor, o_tensor, this->model_prototxt, input_cols, input_rows);
    
    auto result = results[0]; //batch_size is 1

    return result;
}

/**
 * constructor for bounding box
 * 
 * @param[in]   bb  bounding box from post processing
 * @param[in]   img_width   original width of the image
 * @param[in]   img_height  original height of the image
*/
BoundingBox::BoundingBox(vitis::ai::YOLOv3Result::BoundingBox bb, float img_width, float img_height) {

    this->_label = bb.label;
    this->_conf = bb.score;
    this->_x_min = bb.x * img_width;
    this->_y_min = bb.y * img_height;
    this->_width = bb.width * img_width;
    this->_height = bb.height * img_height;
}