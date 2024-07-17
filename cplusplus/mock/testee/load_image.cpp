#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string image_path; std::cin >> image_path;
  std::string window_name = "Input Image";

  cv::Mat image = cv::imread(image_path, cv::ImreadModes::IMREAD_COLOR);

  if (!image.empty()) {
    cv::namedWindow(window_name, cv::WindowFlags::WINDOW_KEEPRATIO);
    cv::imshow(window_name, image);
    int h = 640.0 / image.size().aspectRatio();
    cv::resizeWindow(window_name, cv::Size(640, h));
    cv::waitKey(0);
  }
  else {
    std::cout << "cannot load image: " << "'" << image_path << "'" << std::endl;
  }

  cv::destroyAllWindows();

  return EXIT_SUCCESS;
}
