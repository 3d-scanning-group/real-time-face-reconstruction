//
// Created by Lukas Tenbrink on 2019-06-17.
//

#ifndef TEST_FLIP_FLOP_OPTIMIZER_H
#define TEST_FLIP_FLOP_OPTIMIZER_H

#include <opencv2/opencv.hpp>

// TODO: Data Fusion
// 1. Compute displacement map using raymarching
// 2. Fair displace map by computing best fitting thin plate
void DataFusion();

void optimize(cv::Mat img);


#endif //TEST_FLIP_FLOP_OPTIMIZER_H
