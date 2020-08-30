#include "conditions.hpp"
#include "mainwindow.hpp"
#include "ui_mainwindow.h"

#include <iostream>
#include <opencv\highgui.h>
#include <opencv\cv.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <QtCore>

using namespace cv;
using namespace std;

float Conditions::distanceP2P(Point a, Point b){
    //d = √(|a_x - b_x|^2 + |a_y - b_y|^2)
    float d = sqrt(fabs(pow(a.x-b.x,2) + pow(a.y-b.y,2)));
    return d;
}

float Conditions::getAngle(Point s, Point f, Point e){
    float l1 = distanceP2P(f,s);
    float l2 = distanceP2P(f,e);
    float dot = (s.x-f.x)*(e.x-f.x) + (s.y-f.y)*(e.y-f.y);
    float angle = acos(fabs(dot)/(l1*l2));
    angle = angle*180/PI;
    return angle;
}
