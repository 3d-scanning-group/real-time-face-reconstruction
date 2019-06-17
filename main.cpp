#include <iostream>

#include <opencv2/opencv.hpp>
#include "preprocess.h"
#include "pose_estimator.h"
#include "flip_flop_optimizer.h"

using namespace cv;

int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread( argv[1], 1 );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }

    preprocess(image);

    estimatePose(image);

    optimize(image);

    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    waitKey(0);

    return 0;
}
