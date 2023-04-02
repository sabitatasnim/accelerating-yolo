#include <glog/logging.h>
#include <cmath>
#include <iostream>
#include <numeric>
#include <map>

#include "yoloRunner.h"

std::string label_names[] = {"person", "bicycle", "car", "motorbike", "aeroplane", "bus", "train", 
                            "truck", "boat", "traffic light", "fire hydrant", "stop sign", "parking meter", 
                            "bench", "bird", "cat", "dog", "horse", "sheep", "cow", "elephant", "bear", "zebra", 
                            "giraffe", "backpack", "umbrella", "handbag", "tie", "suitcase", "frisbee", "skis", "snowboard", 
                            "sports ball", "kite", "baseball bat", "baseball glove", "skateboard", "surfboard", "tennis racket", 
                            "bottle", "wine glass", "cup", "fork", "knife", "spoon", "bowl", "banana", "apple", "sandwich", "orange", 
                            "broccoli", "carrot", "hot dog", "pizza", "donut", "cake", "chair", "sofa", "pottedplant", "bed", "diningtable", 
                            "toilet", "tvmonitor", "laptop", "mouse", "remote", "keyboard", "cell phone", "microwave", "oven", "toaster", 
                            "sink", "refrigerator", "book", "clock", "vase", "scissors", "teddy bear", "hair drier", "toothbrush"};

int main(int argc, char* argv[]) {

    if (argc != 4) {
        //                       argv[0]    argv[1]     argv[2]       argv[3]
        std::cerr << "Usage: ./<executable> <xmodel> <prototxt_file> <img.jpg>" << std::endl;
    }

    std::string model_path = std::string(argv[1]);
    std::string prototxt_path = std::string(argv[2]);
    std::string img_path = std::string(argv[3]);

    std::cout << "Model: " << model_path << "\n"
                << "Prototxt Path: " << prototxt_path << "\n"
                << "Image Path: " << img_path << std::endl;

    YOLORunner runner = YOLORunner(model_path, prototxt_path);

    std::cout << "YOLORunner created!" << std::endl;

    /* read the image file */
    cv::Mat img = cv::imread(img_path);

    std::cout << "Image file read!" << std::endl;

    /* run inference on the image */
    vitis::ai::YOLOv3Result bb = runner.run(img);

    /* collect bounding boxes from the inference result */
    std::vector<BoundingBox> b_boxes;

    for(auto& box : bb.bboxes) {
        b_boxes.push_back(BoundingBox(box, img.cols, img.rows));
    }

    /* draw boxes on img */ 
    for(auto& box : b_boxes) {

      int label = box._label;
      float confidence = box._conf;

      float xmin = std::max(0.0f, box._x_min);
      float ymin = std::max(0.0f, box._y_min);
      float xmax = std::min(box._x_min + box._width, (float)img.cols - 1.0f);
      float ymax = std::min(box._y_min + box._height, (float)img.rows - 1.0f);

      std::cout << label_names[box._label] << " " << box._conf << " " << xmin << " " << xmax << " " << ymin << " " << ymax << std::endl;
      cv::rectangle(img, cv::Point(xmin, ymin), cv::Point(xmax, ymax), cv::Scalar(0, 255, 0), 3, 1, 0);
    }

    cv::imwrite("result.png", img);

    return 0;
}