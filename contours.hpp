#ifndef CONTOURS_HPP
#define CONTOURS_HPP

#include "defects.hpp"
#include "handGesture.hpp"
#include "myImage.hpp"

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <vector>
#include <string>

class Contours{
    public:
        MyImage m;
        HandGesture hg;
        Defects df;
        void makeContours(MyImage *m, HandGesture *hg, Defects *df);
    private:
        int findBiggestContour(vector<vector<Point>> contours);
        void drawPrimitives(MyImage *m,HandGesture *hg);
};

#endif // CONTOURS_HPP

