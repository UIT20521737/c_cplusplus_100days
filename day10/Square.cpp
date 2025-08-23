#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(double w, double h): w(w), h(h){
    cout<<"Create a Square"<<endl;
}


Square::~Square(){
    cout<<"Delete a Square"<<endl;
};

double Square::calcArea(){
    return w * h;
}
