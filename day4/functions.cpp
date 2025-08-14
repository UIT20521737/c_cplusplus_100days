#include <iostream>
using namespace std;

// Function Declaration (or prototype)
int add(int a, int b);

// Main function - the entry point of the program
int main() {
    int num1 = 10;
    int num2 = 20;

    // Call the function and store its return value
    int sum = add(num1, num2);

    cout << "The sum is: " << sum << endl;
    return 0;
}

// Function Definition
// This function takes two integers and returns their sum.
int add(int a, int b) {
    return a + b;
}