//
// Created by Cameron Earle on 8/25/18.
//

//Virtual primary display, only load if LED_SIGN_HARDWARE is not defined
#ifndef LED_SIGN_HARDWARE

#include "PrimaryDisplay.h"

#define SCALE_FACTOR 10 //Factor to scale the image by for debug viewing

void PrimaryDisplay::putImageLayer(cv::Mat *layer) {
    cv::Mat scaledMat = cv::Mat(height, width, type);
    cv::resize(*layer, scaledMat, cv::Size(), SCALE_FACTOR, SCALE_FACTOR, CV_INTER_NN);
    scaledMat.copyTo(renderMat);
    scaledMat.release();
}

void PrimaryDisplay::render() {
    cv::imshow("Primary Display", renderMat);
    cv::waitKey(1);
}

#endif