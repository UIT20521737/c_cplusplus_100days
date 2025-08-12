#include <iostream>
using namespace std;

int main() {
    // Learning Relational Operators
    // They compare two values and return a boolean result: true (1) or false (0).
    // Operators: ==, !=, >, <, >=, <=

    int a = 10, b = 20;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "----------------------------------------" << endl;

    // Use 'boolalpha' to print "true" or "false" instead of 1 or 0
    cout << boolalpha;

    cout << "Is a equal to b? (a == b): " << (a == b) << endl;
    cout << "Is a not equal to b? (a != b): " << (a != b) << endl;
    cout << "Is a greater than b? (a > b): " << (a > b) << endl;
    cout << "Is a less than b? (a < b): " << (a < b) << endl;
    cout << "Is a greater than or equal to b? (a >= b): " << (a >= b) << endl;
    cout << "Is a less than or equal to b? (a <= b): " << (a <= b) << endl;

    return 0;
}