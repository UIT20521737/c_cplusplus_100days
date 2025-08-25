#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle: public Shape{
    private: 
        double r;
    public:
        Circle(double r);
        ~Circle() override;
        double calcArea() override;
};
#endif
