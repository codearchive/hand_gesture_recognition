#ifndef CONDITIONS_HPP
#define CONDITIONS_HPP

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <string>
#include <vector>

class Conditions{
    public:
        float getAngle(Point s,Point f,Point e);
        float distanceP2P(Point a,Point b);
};

#endif // CONDITIONS_HPP
