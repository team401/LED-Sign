#include <opencv2/opencv.hpp>

#include "PrimaryDisplay.h"
#include <unistd.h>

#include "websocketpp/server.hpp"

int main() {
    PrimaryDisplay display(64, 32, CV_8UC3);

    cv::Mat theImage = cv::imread("/Users/cameronearle/Desktop/the_image.jpg");

    display.putImageLayer(&theImage);

    display.render();

    usleep(2e10);
}