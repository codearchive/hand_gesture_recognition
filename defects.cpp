#include "defects.hpp"

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp> 
#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace cv;
using namespace std;

void Defects::findDefects(HandGesture *hg) {
    int toleranceDist = hg->bRectHeight/5;
    float toleranceAngle = 80;
    vector<Vec4i> newDefects;
    int startIdx, endIdx, farIdx;
    vector<Vec4i>::iterator d=hg->defects[hg->cIdx].begin();
    while(d!=hg->defects[hg->cIdx].end()) {
        Vec4i& v=(*d);
        startIdx=v[0]; Point ptStart(hg->contours[hg->cIdx][startIdx]);
        endIdx=v[1]; Point ptEnd(hg->contours[hg->cIdx][endIdx]);
        farIdx=v[2]; Point ptFar(hg->contours[hg->cIdx][farIdx]);
        if ((cnd.distanceP2P(ptStart, ptFar) > toleranceDist) && 
			(cnd.distanceP2P(ptEnd, ptFar) > toleranceDist) && 
			(cnd.getAngle(ptStart, ptFar, ptEnd) < toleranceAngle)) {
            if (ptEnd.y > (hg->bRect.y + hg->bRect.height - hg->bRect.height/4)){
            }
            else if (ptStart.y > (hg->bRect.y + hg->bRect.height - hg->bRect.height/4)){
            }
            else {
                newDefects.push_back(v);
            }
        }
        d++;
    }
    numberOfDefects = newDefects.size();
    hg->defects[hg->cIdx].swap(newDefects);
    removeRedundantEndPoints(hg->defects[hg->cIdx], hg);
}

void Defects::removeRedundantEndPoints(vector<Vec4i> newDefects, HandGesture *hg){
    float toleranceDist = hg->bRectWidth/6;
    int endIdxCurrent;
    int startIdxNext;
    for(int i = 0;i<newDefects.size();i++){
        for(int j = i;j<newDefects.size();j++){
            endIdxCurrent = newDefects[i][1]; Point ptEndCurrent(hg->contours[hg->cIdx][endIdxCurrent]);
            startIdxNext = newDefects[j][0]; Point ptStartNext(hg->contours[hg->cIdx][startIdxNext]);
            if (cnd.distanceP2P(ptEndCurrent, ptStartNext) < toleranceDist ){
                hg->contours[hg->cIdx][startIdxNext] = ptEndCurrent;
            }
        }
    }
}
