#include "Car.h"
#include <iostream>
using namespace std;
int main(){
    cout << "--- Starting main function ---" << endl;
    
    // Creating an object using the parameterized constructor
    Car my_car("Toyota", 2023);
    my_car.displayInfo();

    { // This creates a new scope
        cout << "\n--- Entering a new scope ---" << endl;
        Car another_car("Ford", 2021);
        another_car.displayInfo();
        cout << "--- Exiting the new scope ---" << endl;
    } // 'another_car' goes out of scope here, so its destructor is called.

    cout << "\n--- Ending main function ---" << endl;
    return 0;
}