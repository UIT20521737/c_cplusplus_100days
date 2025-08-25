// Search.cpp
#include "Search.h"
#include <algorithm> // Required for std::sort

// Constructor
Search::Search(const std::vector<int>& initial_vec) : vec(initial_vec) {
    // Member 'vec' is initialized
}

// Linear Search implementation
int Search::linear_search(int target) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == target) {
            return i;
        }
    }
    return -1;
}

// Binary Search implementation
int Search::binary_search(int target) {
    // IMPORTANT: Binary search requires the data to be sorted.
    // sort(vec.begin(), vec.end());

    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (vec[mid] == target) {
            return mid;
        }
        if (vec[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}