#include <stdio.h>
#include <opencv2/opencv.hpp>

#include <sensor_msgs/Image.h>
#include <sensor_msgs/image_encodings.h>
#include <cv_bridge/cv_bridge.h>
using namespace cv;
int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    
    Mat img;
    img = imread( argv[1], 1 );

    if ( !img.data )
    {
        printf("No image data \n");
        return -1;
    }
    
    int crop_x = 620;
    int crop_y = 920;
    
    cv::Rect roi;
    roi.width = crop_x;
    roi.height = crop_y;
    
    cv::Mat crop = img(roi);
    cv::imshow("crop", crop);
    
    //namedWindow("Display Image", WINDOW_AUTOSIZE );
    //imshow("Display Image", img);
    imwrite("lena_crop.jpg",crop);
    waitKey(0);
    return 0;
}
