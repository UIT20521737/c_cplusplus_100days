#include <iostream>
using namespace std;

int main() {
    int var = 25;
    int* ptr; // Declare a pointer to an integer

    // Use the address-of operator (&) to get the address of 'var'
    ptr = &var;

    cout << "--- Basic Pointers ---" << endl;
    cout << "Value of 'var': " << var << endl;
    cout << "Address of 'var' (&var): " << &var << endl;
    cout << "Value stored in 'ptr' (the address it points to): " << ptr << endl;

    // Use the dereference operator (*) to get the value at the address
    cout << "Value at the address pointed by 'ptr' (*ptr): " << *ptr << endl;
    
    // You can also change the original variable's value through the pointer
    *ptr = 50;
    cout << "New value of 'var' after changing it via pointer: " << var << endl;

    return 0;
}