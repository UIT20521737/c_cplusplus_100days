#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Base Cases
    if (n <= 1) {
        return n;
    }
    // Recursive Step
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    // Note: This implementation is simple to understand but very inefficient
    // for large numbers due to repeated calculations.
}

int main() {
    int count = 10;
    cout << "The first " << count << " Fibonacci numbers are:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    // Expected: 0 1 1 2 3 5 8 13 21 34
    return 0;
}