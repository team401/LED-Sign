//
// Created by Cameron Earle on 8/25/18.
//

#ifndef LED_SIGN_PRIMARYDISPLAY_H
#define LED_SIGN_PRIMARYDISPLAY_H

#include <opencv2/opencv.hpp>

class PrimaryDisplay {
public:
    int width;
    int height;
    int type;

    PrimaryDisplay(int width_, int height_, int type_) : renderMat(height_, width_, type_) {
        width = width_;
        height = height_;
    }

    void putImageLayer(cv::Mat *layer);

    void render();
private:
    cv::Mat renderMat;
};

#endif //LED_SIGN_PRIMARYDISPLAY_H
