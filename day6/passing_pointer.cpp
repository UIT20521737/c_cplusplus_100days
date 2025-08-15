#include <iostream>
using namespace std;

// This function takes a pointer to an integer as its parameter.
// By having the address, it can now directly modify the original variable's value.
void addTen(int* ptr_to_num) {
    cout << "Inside function: Received address " << ptr_to_num << endl;

    // Dereference the pointer to access the value at that address
    // and add 10 to it. This modifies the original 'my_number' in main().
    *ptr_to_num = *ptr_to_num + 10;
}

int main() {
    int my_number = 20;

    cout << "--- Passing Pointers to Functions ---" << endl;
    cout << "Original value of my_number: " << my_number << endl;
    cout << "Address of my_number in main(): " << &my_number << endl;

    // We pass the MEMORY ADDRESS of 'my_number' using the '&' operator.
    addTen(&my_number);

    cout << "Value of my_number after calling addTen(): " << my_number << endl;

    return 0;
}