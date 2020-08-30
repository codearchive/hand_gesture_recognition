#ifndef HANDGESTURE_HPP
#define HANDGESTURE_HPP

#define PI 3.14159

#include "conditions.hpp"
#include "myImage.hpp"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <QMainWindow>
#include <string>
#include <vector>

class HandGesture{
    public:
        MyImage m;
        Conditions cnd;
        HandGesture();
        std::vector<std::vector<Point>> contours;
        std::vector<std::vector<int>> hullI;
        std::vector<std::vector<Point>> hullP;
        std::vector<std::vector<Vec4i>> defects;
        std::vector<Point> fingerTips;
        Rect bRect;
        int cIdx;
        int frameNumber;
        int mostFrequentNumberOfFingers;
        int bRectWidth;
        int bRectHeight;
        bool Hand;
        bool determineHand();
        void initVectors();
        void getGesture(MyImage *m);
        void getFingerTips(MyImage *m);)
        void drawFingerTips(MyImage *m);
    private:
        std::vector<Point> moveUp;
        std::vector<Point> moveDown;
        std::vector<Point> moveRight;
        std::vector<Point> moveLeft;
        std::vector<int> fingerNumbers;
        std::string intToString(int number);
        void boundingRect();
        void computeFingerNumber();
};

#endif // HANDGESTURE_HPP
