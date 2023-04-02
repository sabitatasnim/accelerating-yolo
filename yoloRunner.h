#include <string>
#include <memory>
#include <fstream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <vitis/ai/dpu_task.hpp>
#include <vitis/ai/nnpp/yolov3.hpp>

class YOLORunner {

    public:

        int height = 0;
        int width = 0;
        cv::Size model_input_size;
        std::unique_ptr<vitis::ai::DpuTask> dpuTask;
        vitis::ai::proto::DpuModelParam model_prototxt;
        std::vector<vitis::ai::library::InputTensor> i_tensor;
        std::vector<vitis::ai::library::OutputTensor> o_tensor;

        /**
         * Constructor
         * 
         * @param[in]   model_path path to the xmodel file
         * @param[out]  YOLORunner object
        */
        YOLORunner(std::string model_path, std::string prototxt_path);

        /**
         * Preprocessor
         * 
         * @param[in]   img original input image
         * @param[out]  resized image required by the DPU to run inference on
        */
        cv::Mat preprocess(cv::Mat img);

        /**
         * DPU Task Runner
         * 
         * @param[in]   img image to run inference on
         * @param[out]  YOLOv3Result object
        */
        vitis::ai::YOLOv3Result run(cv::Mat img);
};