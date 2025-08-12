#include <iostream>
using namespace std;

int main() {
    // Learning Logical Operators
    // They are used to combine conditional statements.
    // Operators: && (AND), || (OR), ! (NOT)

    bool condition1 = true;
    bool condition2 = false;

    cout << boolalpha; // Print "true" or "false"
    cout << "condition1 = " << condition1 << ", condition2 = " << condition2 << endl;
    cout << "----------------------------------------" << endl;

    // && (AND): Returns true only if both conditions are true
    cout << "condition1 && condition2 (AND): " << (condition1 && condition2) << endl;

    // || (OR): Returns true if at least one condition is true
    cout << "condition1 || condition2 (OR): " << (condition1 || condition2) << endl;

    // ! (NOT): Inverts the boolean value
    cout << "!condition1 (NOT): " << (!condition1) << endl;
    cout << "!condition2 (NOT): " << (!condition2) << endl;

    return 0;
}