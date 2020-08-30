#include "handGesture.hpp"

#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace cv;
using namespace std;

HandGesture::HandGesture(){
    frameNumber = 0;
}


void HandGesture::initVectors(){
    hullI = vector<vector<int>>(contours.size());
    hullP = vector<vector<Point>>(contours.size());
    defects = vector<vector<Vec4i>>(contours.size());
}

void HandGesture::boundingRect(){
    bRectHeight = bRect.height;
    bRectWidth = bRect.width;
}

string HandGesture::intToString(int number){
    stringstream ss;
    ss << number;
    string str = ss.str();
    return str;
}

bool HandGesture::determineHand(){
    boundingRect();
    double h = bRectHeight;
    double w = bRectWidth;
    Hand=true;
    if(fingerTips.size() > 5 ){
        Hand=false;
    }else if(h==0 || w == 0){
        Hand=false;
    }else if(h/w > 2.5 || w/h < 0.5 ){
        Hand=false;
    }else if(bRect.x<20 || bRect.y<10){
        Hand=false;
    }
    return Hand;
}

void HandGesture::computeFingerNumber(){
    std::sort(fingerNumbers.begin(), fingerNumbers.end());
    int currentNumber;
    int currentFreq = 1;
    int highestFreq = 1;
    currentNumber = fingerNumbers[0];
    for(int i=1;i<fingerNumbers.size(); i++){
        if(fingerNumbers[i-1] != fingerNumbers[i]){
            if(currentFreq > highestFreq){
                currentNumber = fingerNumbers[i-1];
                highestFreq = currentFreq;
            }
            currentFreq = 0;
        }
        currentFreq++;
    }
    if(currentFreq > highestFreq){
        currentNumber = fingerNumbers[fingerNumbers.size()-1];
    }
    mostFrequentNumberOfFingers = currentNumber;
}

void HandGesture::getGesture(MyImage *m){
    Point highestPoint, lowestPoint, rightmostPoint, leftmostPoint;
    highestPoint.y = m->src.rows;
    lowestPoint.y = 0;
    rightmostPoint.x = 0;
    leftmostPoint.x = m->src.cols;
    int absMoveUp = 0;
    int absMoveDown = 0;
    int absMoveRight = 0;
    int absMoveLeft = 0;
    int flagMove = 0;
    if(bRect.height > m->src.rows/3 && Hand){
        int i = fingerTips.size();
        fingerNumbers.push_back(i);
        vector<Point>::iterator d = contours[cIdx].begin();
        while(d != contours[cIdx].end()){
            Point v=(*d);
            if(v.y < highestPoint.y){
                highestPoint = v;
            }
            if(v.y > lowestPoint.y){
                lowestPoint=v;
            }
            if(v.x > rightmostPoint.x){
                rightmostPoint = v;
            }
            if(v.x < leftmostPoint.x){
                leftmostPoint = v;
            }
            d++;
        }
        moveUp.push_back(highestPoint);
        moveDown.push_back(lowestPoint);
        moveRight.push_back(rightmostPoint);
        moveLeft.push_back(leftmostPoint);
        if (frameNumber > 24){
            absMoveUp = moveUp[0].y - moveUp[24].y;
            absMoveDown = moveDown[0].y - moveDown[24].y;
            absMoveRight = moveRight[0].x - moveRight[24].x;
            absMoveLeft = moveLeft[0].x - moveLeft[24].x;
            if (absMoveUp > 50){
                flagMove = 1;
            }else if (absMoveDown < -50){
                flagMove = 2;
            }else if (absMoveRight < -70){
                flagMove = 3;
            }else if (absMoveLeft > 70){
                flagMove = 4;
            }
            frameNumber = 0;
            computeFingerNumber();
            switch (mostFrequentNumberOfFingers){
            case 0:
                switch (flagMove) {
                case 1: //вверх
                    mostFrequentNumberOfFingers = 6;
                    break;
                case 2: //вниз
                    mostFrequentNumberOfFingers = 12;
                    break;
                case 3: //вправо
                    mostFrequentNumberOfFingers = 24;
                    break;
                case 4: //влево
                    mostFrequentNumberOfFingers = 18;
                    break;
                }
                break;
            case 1:
                switch (flagMove) {
                case 1: //вверх
                    mostFrequentNumberOfFingers = 7;
                    break;
                case 2: //вниз
                    mostFrequentNumberOfFingers = 13;
                    break;
                case 3: //вправо
                    mostFrequentNumberOfFingers = 25;
                    break;
                case 4: //влево
                    mostFrequentNumberOfFingers = 19;
                    break;
                }
                break;
            case 2:
                switch (flagMove) {
                case 1: //вверх
                    mostFrequentNumberOfFingers = 8;
                    break;
                case 2: //вниз
                    mostFrequentNumberOfFingers = 14;
                    break;
                case 3: //вправо
                    mostFrequentNumberOfFingers = 26;
                    break;
                case 4: //влево
                    mostFrequentNumberOfFingers = 20;
                    break;
                }
                break;
            case 3:
                switch (flagMove) {
                case 1: //вверх
                    mostFrequentNumberOfFingers = 9;
                    break;
                case 2: //вниз
                    mostFrequentNumberOfFingers = 15;
                    break;
                case 3: //вправо
                    mostFrequentNumberOfFingers = 27;
                    break;
                case 4: //влево
                    mostFrequentNumberOfFingers = 21;
                    break;
                }
                break;
            case 4:
                switch (flagMove) {
                case 1: //вверх
                    mostFrequentNumberOfFingers = 10;
                    break;
                case 2: //вниз
                    mostFrequentNumberOfFingers = 16;
                    break;
                case 3: //вправо
                    mostFrequentNumberOfFingers = 28;
                    break;
                case 4: //влево
                    mostFrequentNumberOfFingers = 22;
                    break;
                }
                break;
            case 5:
                switch (flagMove) {
                case 1: //вверх
                    mostFrequentNumberOfFingers = 11;
                    break;
                case 2: //вниз
                    mostFrequentNumberOfFingers = 17;
                    break;
                case 3: //вправо
                    mostFrequentNumberOfFingers = 29;
                    break;
                case 4: //влево
                    mostFrequentNumberOfFingers = 23;
                    break;
                }
                break;
            }
            fingerNumbers.clear();
            moveUp.clear();
            moveDown.clear();
            moveRight.clear();
            moveLeft.clear();
            flagMove = 0;
        }
    }
}

void HandGesture::drawFingerTips(MyImage *m){
    Point pt;
    for(int i=0;i<fingerTips.size();i++){
        pt=fingerTips[i];
        putText(m->src, intToString(i), pt-Point(0,30), FONT_HERSHEY_PLAIN, 1.2f, Scalar(200,200,200), 2);
        circle(m->src, pt, 8, Scalar(200,100,255), 4, 1);
     }
}

void HandGesture::getFingerTips(MyImage *m){
    fingerTips.clear();
    int i = 0;
    vector<Vec4i>::iterator d = defects[cIdx].begin();
    while( d != defects[cIdx].end()){
        Vec4i &v=(*d);
        int startIdx = v[0]; Point ptStart(contours[cIdx][startIdx]);
        int endIdx = v[1]; Point ptEnd(contours[cIdx][endIdx]);
        if(i == 0){
            fingerTips.push_back(ptStart);
            i++;
        }
        if (cnd.distanceP2P(ptStart, ptEnd) > (1.5*(bRect.height/10)) && cnd.distanceP2P(ptStart, ptEnd)<(5.5*(bRect.height/10))){
            fingerTips.push_back(ptEnd);
        }
        d++;
    }
}
