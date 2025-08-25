#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(double r):r(r){
    cout<<"Create a Circle"<<endl;
}


Circle::~Circle(){
    cout<<"Delete a Circle"<<endl;
};

double Circle::calcArea(){
    return 3.14159 * r * r;
}
