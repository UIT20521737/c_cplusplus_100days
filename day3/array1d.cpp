#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

int main() {
    // Declare and initialize a 1D array of integers.
    int numbers[] = {45, 12, -8, 101, 3, -22, 77};

    // A common trick to calculate the number of elements in a C-style array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    cout << "## Working with 1D Arrays ##\n" << endl;
    cout << "The array has " << size << " elements." << endl;

    // --- 1. Iterate and print all elements ---
    cout << "\n--- Array Elements ---" << endl;
    for (size_t i = 0; i < size; ++i) { // Using size_t for index is good practice
        // Array indices always start from 0.
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // --- 2. Find the maximum and minimum element ---
    int max_val = INT_MIN; // Start with the smallest possible integer
    int min_val = INT_MAX; // Start with the largest possible integer

    for (size_t i = 0; i < size; ++i) {
        // Find maximum
        if (numbers[i] > max_val) {
            max_val = numbers[i];
        }
        // Find minimum
        if (numbers[i] < min_val) {
            min_val = numbers[i];
        }
    }

    cout << "\n--- Array Analysis ---" << endl;
    cout << "Maximum value: " << max_val << endl;
    cout << "Minimum value: " << min_val << endl;

    return 0;
}