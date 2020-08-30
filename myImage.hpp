#ifndef MYIMAGE_HPP
#define MYIMAGE_HPP

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <vector>

class MyImage{
    public:
        MyImage(int webCamera);
        MyImage();
        cv::Mat srcPreProcessed;
        cv::Mat src;
        cv::Mat srcProcessed;
        int cameraSrc;
        cv::VideoCapture cap;
};

#endif
