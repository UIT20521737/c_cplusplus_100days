#include <iostream>
using namespace std;

long long factorial(int n) {
    // Base Case: The condition that stops the recursion.
    if (n == 0) {
        return 1;
    }
    // Recursive Step: The function calls itself with a smaller input.
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5;
    cout << "Factorial of " << number << " is " << factorial(number) << endl; // Expected: 120
    return 0;
}