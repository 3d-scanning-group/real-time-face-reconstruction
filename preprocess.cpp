//
// Created by Lukas Tenbrink on 2019-06-17.
//

#include "preprocess.h"

void preprocess(cv::Mat img) {
    cv::fastNlMeansDenoisingColored(img, img, 10, 10, 7, 21);
}
