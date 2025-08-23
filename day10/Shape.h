#ifndef SHAPE_H
#define SHAPE_H
// An abstract base class for geometric shapes.
class Shape {
    protected:
        // Constructors are often protected in abstract classes to prevent
        // direct instantiation from outside code, e.g., Shape my_shape;.
        Shape();
    public:
        // A virtual destructor is essential for any base class with virtual functions.
        // '= default' tells the compiler to generate the default implementation automatically.
        virtual ~Shape() = default;
        // A pure virtual function makes this class abstract.
        // Any class that inherits from Shape MUST implement this function.
        virtual double calcArea() = 0;
};
#endif
