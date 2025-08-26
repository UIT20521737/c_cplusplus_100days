#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main(){
    Mat image = imread("../images.jpeg");
    imshow("image", image);
    if (image.empty()) {
        cout << "Could not open or find the image" << endl;
        return -1; // Exit the program if the image is not loaded
    }
    waitKey(0);
    return 0;
}