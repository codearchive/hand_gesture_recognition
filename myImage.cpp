#include "myImage.hpp"

#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <string>

MyImage::MyImage(){
}

MyImage::MyImage(int webCamera){
    cameraSrc=webCamera;
    cap=cv::VideoCapture(webCamera);
}

