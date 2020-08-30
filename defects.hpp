#ifndef GETGESTURE_HPP
#define GETGESTURE_HPP

#include "conditions.hpp"
#include "handgesture.hpp"

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <QMainWindow>
#include <string>
#include <vector>

class Defects{
    public:
        Conditions cnd;
        HandGesture hg;
        void findDefects(HandGesture *hg);
        int numberOfDefects;
    private:
        void removeRedundantEndPoints(std::vector<Vec4i> newDefects, HandGesture *hg);
};

#endif // GETGESTURE_HPP
