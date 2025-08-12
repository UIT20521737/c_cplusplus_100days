#include <iostream>
using namespace std;

int main() {
    // Learning Miscellaneous Operators
    // Includes the conditional operator, sizeof, and pointer-related operators.
    
    int a = 20;
    int b = 10;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "----------------------------------------" << endl;

    // 1. Conditional Operator (?:) - A shorthand for if-else
    cout << "Conditional Operator (Ternary):" << endl;
    int max_val = (a > b) ? a : b;
    cout << "The greater value between a and b is: " << max_val << endl;
    cout << "----------------------------------------" << endl;

    // 2. sizeof Operator - Returns the size of a variable or data type in bytes
    cout << "sizeof Operator:" << endl;
    cout << "Size of an integer (int): " << sizeof(int) << " bytes" << endl;
    cout << "Size of variable 'a': " << sizeof(a) << " bytes" << endl;
    cout << "Size of a double: " << sizeof(double) << " bytes" << endl;
    cout << "----------------------------------------" << endl;

    // 3. Address-of Operator (&) and Dereference Operator (*)
    cout << "Pointer-related Operators:" << endl;
    int* ptr_a = &a; // ptr_a now holds the memory address of 'a'
    cout << "Memory address of 'a' (&a): " << ptr_a << endl;
    cout << "Value at that memory address (*ptr_a): " << *ptr_a << endl;

    return 0;
}