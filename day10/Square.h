#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
class Square: public Shape{
    private: 
        double w;
        double h;
    public:
        Square(double w, double h);
        ~Square() override;
        double calcArea() override;
};
#endif
