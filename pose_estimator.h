//
// Created by Lukas Tenbrink on 2019-06-17.
//

#ifndef TEST_POSE_ESTIMATOR_H
#define TEST_POSE_ESTIMATOR_H


#include <opencv2/opencv.hpp>

// TODO: 
// 1. Implement Procrutes Algorithms, including defining key points on basel model
// 2. ICP with SVD(?) or optimization
void estimatePose(cv::Mat DepthMap, cv::Mat NormalMap, char* ModelPath);



#endif //TEST_POSE_ESTIMATOR_H
