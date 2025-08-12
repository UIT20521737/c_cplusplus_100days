#include <iostream>
using namespace std;

int main() {
    // Learning Miscellaneous Operators
    
    int a = 20;
    int b = 10;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "========================================" << endl;

    // 1. Conditional Operator (?:) - A shorthand for if-else
    cout << "## 1. Conditional Operator (Ternary):" << endl;
    int max_val = (a > b) ? a : b;
    cout << "The greater value between a and b is: " << max_val << endl;
    cout << "----------------------------------------" << endl;

    // 2. sizeof Operator - Returns the size of a variable or data type in bytes
    cout << "## 2. sizeof Operator:" << endl;
    cout << "Size of an integer (int): " << sizeof(int) << " bytes" << endl;
    cout << "Size of variable 'a': " << sizeof(a) << " bytes" << endl;
    cout << "Size of a double: " << sizeof(double) << " bytes" << endl;
    cout << "----------------------------------------" << endl;

    // 3. Address-of Operator (&) and Dereference Operator (*)
    cout << "## 3. Pointer-related Operators:" << endl;
    int* ptr_a = &a; // ptr_a now holds the memory address of 'a'
    cout << "Memory address of 'a' (&a): " << ptr_a << endl;
    cout << "Value at that memory address (*ptr_a): " << *ptr_a << endl;
    cout << "----------------------------------------" << endl;

    // 4. Dynamic Memory Operators (new and delete) - BỔ SUNG
    cout << "## 4. Dynamic Memory Operators:" << endl;
    int* dynamic_int_ptr = nullptr; // Always initialize pointers to nullptr

    // Use 'new' to allocate memory for one integer on the heap
    dynamic_int_ptr = new int;
    cout << "Allocated a new integer on the heap." << endl;

    *dynamic_int_ptr = 123; // Assign a value to the newly allocated memory
    cout << "Value of the dynamic integer: " << *dynamic_int_ptr << endl;

    // Use 'delete' to free the memory to prevent memory leaks
    delete dynamic_int_ptr;
    cout << "Freed the allocated memory." << endl;

    // Good practice: Set pointer to nullptr after deleting to avoid dangling pointers
    dynamic_int_ptr = nullptr; 

    return 0;
}