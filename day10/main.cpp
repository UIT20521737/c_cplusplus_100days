#include <iostream>

// Include the headers for the concrete classes
#include "Circle.h"
#include "Square.h"
using namespace std;
int main() {
    // 1. Declare two pointers of the BASE class type 'Shape*'
    Shape* shape1 = nullptr;
    Shape* shape2 = nullptr;

    cout << "--- Creating a Circle and a Square ---" << endl;

    // 2. Point the base class pointers to derived class objects
    // A 'Shape' pointer can hold the address of a 'Circle' object.
    shape1 = new Circle(10.0); 

    // A 'Shape' pointer can also hold the address of a 'Square' object.
    shape2 = new Square(5.0, 4.0);  

    cout << "\n--- Calling virtual methods using polymorphism ---" << endl;
    
    // Call the draw() method through the Shape pointer.
    // The program will call Circle::draw() at runtime.
  
    cout << "  - Area: " << shape1->calcArea() << endl;

    // The program will call Square::draw() at runtime.
    cout << "  - Area: " << shape2->calcArea() << endl;

    // 3. IMPORTANT: Clean up the memory manually
    // Since we used 'new', we are responsible for calling 'delete'.
    cout << "\n--- Freeing memory ---" << endl;
    delete shape1;
    delete shape2;
    
    return 0;
}