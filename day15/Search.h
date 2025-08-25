// Search.h
#ifndef SEARCH_H
#define SEARCH_H

#include <vector>
using namespace std;
class Search {
private:
    vector<int> vec;

public:
    // Constructor to initialize with a vector
    Search(const vector<int>& initial_vec);

    // Returns the index of the target, or -1 if not found
    int linear_search(int target);

    // Returns the index of the target, or -1 if not found
    // This method will internally sort the data first.
    int binary_search(int target);
};

#endif // SEARCH_H