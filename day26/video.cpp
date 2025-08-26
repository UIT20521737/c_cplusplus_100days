#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main(){
    int frame_count = 0;
    VideoCapture cap(0);
    if(!cap.isOpened()){
        cout << "Error: Cannot open the camera" << endl;
        return -1;
    }
    Mat frame;
    while(true){
        bool isSuccess = cap.read(frame);
        if (!isSuccess) {
            cout << "Video stream ended or camera disconnected." << endl;
            break;
        }
        imshow("Live Video", frame);
        if (waitKey(1) == 27) {
            cout << "ESC key is pressed by user. Stopping the video" << endl;
            break;
        }

    }
    return 0;
}