#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;
class Car{
    private: 
        string brand;
        int year;
    public:
        Car();
        Car(int year, string brand);
        Car(string brand, int year);
        ~Car();
        void displayInfo();
}; 
#endif