#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
using namespace std;
using namespace cv;
int main(){
    string image_path = "../images.jpeg";
    Mat original_image = imread(image_path);

    if (original_image.empty()) {
        cout << "Could not load image." << endl;
        return -1;
    }

    int height = original_image.rows;
    int width = original_image.cols;
    int channels = original_image.channels();

    cout << "--- Original Image Dimensions ---" << endl;
    cout << "Height: " << height << " pixels" << endl;
    cout << "Width:  " << width << " pixels" << endl;
    cout << "Channels: " << channels << endl;

    imshow("Original Image", original_image);

    Mat resized_image;
    resize(original_image, resized_image, Size(width*2, height*2)); 
    imshow("Resized Image", resized_image);
    
    height = resized_image.rows;
    width = resized_image.cols;
    channels = resized_image.channels();
    cout << "--- Resized Image Dimensions ---" << endl;
    cout << "Height: " << height << " pixels" << endl;
    cout << "Width:  " << width << " pixels" << endl;
    cout << "Channels: " << channels << endl;

    Mat gray_image;
    cvtColor(original_image, gray_image, COLOR_BGR2GRAY);
    imshow("Grayscale Image", gray_image);
    height = gray_image.rows;
    width = gray_image.cols;
    channels = gray_image.channels();

    cout << "--- Gray Image Dimensions ---" << endl;
    cout << "Height: " << height << " pixels" << endl;
    cout << "Width:  " << width << " pixels" << endl;
    cout << "Channels: " << channels << endl;

    Rect region_of_interest(100, 50, 50, 150); 
    Mat cropped_image = original_image(region_of_interest);
    imshow("Cropped Image", cropped_image);
    height = cropped_image.rows;
    width = cropped_image.cols;
    channels = cropped_image.channels();

    cout << "--- Cropped Image Dimensions ---" << endl;
    cout << "Height: " << height << " pixels" << endl;
    cout << "Width:  " << width << " pixels" << endl;
    cout << "Channels: " << channels << endl;
    waitKey(0);

    return 0;
}