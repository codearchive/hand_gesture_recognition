#include "handGesture.hpp"
#include "myImage.hpp"
#include "mainwindow.hpp"

#include <iostream>
#include <opencv2\cv.h>
#include <opencv2\highgui.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <QtCore>

using namespace cv;
using namespace std;

int Contours::findBiggestContour(vector<vector<Point>> contours){
    int indexOfBiggestContour = -1;
    int sizeOfBiggestContour = 0;
    for (int i = 0; i < contours.size(); i++){
        if(contours[i].size() > sizeOfBiggestContour){
            sizeOfBiggestContour = contours[i].size();
            indexOfBiggestContour = i;
        }
    }
    return indexOfBiggestContour;
}

void Contours::drawPrimitives(MyImage *m,HandGesture *hg){
    drawContours(m->src,hg->hullP,hg->cIdx,cv::Scalar(0,255,0),2, 8, vector<Vec4i>(), 0, Point());
    rectangle(m->src,hg->bRect.tl(),hg->bRect.br(),Scalar(0,0,200));
    vector<Vec4i>::iterator d=hg->defects[hg->cIdx].begin();
    while (d!=hg->defects[hg->cIdx].end()){
        Vec4i &v=(*d);
        int startIdx=v[0]; Point ptStart(hg->contours[hg->cIdx][startIdx]);
        int endIdx=v[1]; Point ptEnd(hg->contours[hg->cIdx][endIdx]);
        int farIdx=v[2]; Point ptFar(hg->contours[hg->cIdx][farIdx]);
        line(m->src, ptStart, ptFar, Scalar(0,255,0), 1);
        line(m->src, ptEnd, ptFar, Scalar(0,255,0), 1);
        circle(m->src, ptStart, 4, Scalar(255,255,255), 2);
        circle(m->src, ptFar, 4, Scalar(255,255,255), 2);
        circle(m->src, ptEnd, 4, Scalar(255,255,255), 2);
        d++;
     }
}

void Contours::makeContours(MyImage *m, HandGesture *hg, Defects *df){
    Mat tempMat;
    pyrUp(m->srcProcessed,m->srcProcessed);
    m->srcProcessed.copyTo(tempMat);
    Canny(tempMat,tempMat,0,0,3);
    findContours(tempMat,hg->contours,CV_RETR_EXTERNAL,CV_CHAIN_APPROX_NONE);
    hg->initVectors();
    hg->cIdx=findBiggestContour(hg->contours);
    if(hg->cIdx!=-1){
        hg->bRect=boundingRect(Mat(hg->contours[hg->cIdx]));
        convexHull(hg->contours[hg->cIdx],hg->hullP[hg->cIdx],false);
        convexHull(hg->contours[hg->cIdx],hg->hullI[hg->cIdx],false);
        approxPolyDP(hg->hullP[hg->cIdx],hg->hullP[hg->cIdx],1,true);
        if(hg->contours[hg->cIdx].size()>3 && hg->determineHand()){
            convexityDefects(hg->contours[hg->cIdx],hg->hullI[hg->cIdx],hg->defects[hg->cIdx]);
            df->findDefects(hg);
            hg->getFingerTips(m);
            hg->drawFingerTips(m);
            drawPrimitives(m,hg);
        }
    }
}
