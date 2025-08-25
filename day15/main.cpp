// main.cpp
#include "Search.h"
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>

using namespace std;

void test_search_algorithm(const vector<int>& vec, int target, int option) {
    Search searcher(vec); // Create a Search object with a copy of the vector
    int index = -1;

    auto start_time = chrono::high_resolution_clock::now();

    switch (option) {
        case 1:
            index = searcher.linear_search(target);
            break;
        case 2:
            index = searcher.binary_search(target);
            break;
    }

    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time);

    // Print results
    if (index != -1) {
        cout << "Target " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Target " << target << " not found." << endl;
    }

    switch (option) {
        case 1:
            cout << "Execution time of Linear Search: " << duration.count() << " microseconds." << endl;
            break;
        case 2:
            // Note: This time includes the internal sort for binary search.
            cout << "Execution time of Binary Search (incl. sort): " << duration.count() << " microseconds." << endl;
            break;
    }
}

// main.cpp
// ... (hàm test_search_algorithm không đổi)
int main() {
    const int VECTOR_SIZE = 20000;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 10000);
    vector<int> original_vec(VECTOR_SIZE);
    generate(original_vec.begin(), original_vec.end(), [&]() { return distrib(gen); });
    int target = distrib(gen);
    cout << "Vector size: " << VECTOR_SIZE << endl;
    cout << "Searching for target: " << target << endl;

    cout << "\n--------Testcase 1: Linear Search on Unsorted Data--------" << endl;
    test_search_algorithm(original_vec, target, 1);

    cout << "\n--------Testcase 2: Binary Search on Sorted Data--------" << endl;
    // Create a sorted copy of the vector BEFORE timing the search.
    vector<int> sorted_vec = original_vec;
    cout << "Sorting the vector first (this time is not measured)..." << endl;
    sort(sorted_vec.begin(), sorted_vec.end());
    
    // Now, we test the search on the pre-sorted data.
    test_search_algorithm(sorted_vec, target, 2);

    return 0;
}