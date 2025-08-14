#include <iostream>
using namespace std;

// 1. Pass-by-value: makes a copy of the variable.
void cannot_change(int x) {
    x = 100; // This only changes the local copy 'x'.
}

// 2. Pass-by-reference (using &): passes the actual variable.
void can_change(int& x) {
    x = 100; // This changes the original variable.
}

int main() {
    int my_number = 10;
    cout << "Original value: " << my_number << endl;

    cannot_change(my_number);
    cout << "After calling cannot_change(): " << my_number << endl;

    can_change(my_number);
    cout << "After calling can_change(): " << my_number << endl;

    return 0;
}