//
// Created by Lukas Tenbrink on 2019-06-17.
//

#ifndef TEST_PREPROCESS_H
#define TEST_PREPROCESS_H

#include <opencv2/opencv.hpp>

void DataLoader(cv::Mat& depth, cv::Mat& rgbimage);

// Check this link for more details: 
//https://github.com/GKalliatakis/Bilateral-Filtering/blob/master/bilateralGrayscale.m
void DepthMapDenoising(cv::Mat& depthMap, double sigma_s, double sigma_r, double noise);
void NormalEstimation(cv::Mat depthMap, cv::Mat& NormalMap);

void preprocess(cv::Mat img);


#endif //TEST_PREPROCESS_H
