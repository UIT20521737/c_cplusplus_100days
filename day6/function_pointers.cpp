#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int main(){
    int (*operation) (int, int);

    cout << "--- Using Function Pointers ---" << endl;

    // --- 1. Point it to the 'add' function ---
    operation = &add; // Assign the address of the 'add' function to the pointer

    // Call the function through the pointer
    int result1 = operation(20, 7); 
    cout << "Result when pointing to 'add': " << result1 << endl;

    // --- 2. Now, point it to the 'subtract' function ---
    operation = &sub; // Re-assign the pointer to a different function

    // Call the new function using the same pointer variable
    int result2 = operation(20, 7);
    cout << "Result when pointing to 'sub': " << result2 << endl;
    return 0;
}