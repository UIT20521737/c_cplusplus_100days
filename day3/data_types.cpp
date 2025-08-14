#include <iostream>
using namespace std;
int main(){
    // --- Primitive Types ---
    cout << "--- Primitive Types ---" << endl;
    int my_int = 10;
    double my_double = 5.5;
    char my_char = 'A';
    bool my_bool = true;
    // Note: Primitive types don't have methods like objects do.
    // They are manipulated by operators (+, -, *, /, ==, etc.)
    // and standard library functions (e.g., from <cmath> or <cctype>).
    cout << "int, double, char, bool are primitives. They have no built-in methods.\n";
    cout << "my_int: " << my_int << endl;
    cout << "my_double: " << my_double << endl;
    cout << "my_char: " << my_char << endl;
    cout << "my_bool: " << my_bool << endl;

    return 0;
}