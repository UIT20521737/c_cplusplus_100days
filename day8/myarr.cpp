#include <iostream>
#include <algorithm> // For std::copy
using namespace std;

class MyArray {
private:
    int* data;
    size_t size;

public:
    // 1. Constructor
    MyArray(size_t sz) : data(new int[sz]), size(sz){
        cout << "Constructor called. Allocated memory for " << size << " integers." << endl;
    }

    // 2. Destructor (REQUIRED because we used 'new')
    ~MyArray() {
        cout << "Destructor called. Freeing memory." << endl;
        delete[] data;
    }

    // 3. Copy Constructor (REQUIRED to perform a deep copy)
    MyArray(const MyArray& other) :  data(new int[other.size]), size(other.size) {
        cout << "Copy Constructor called. Creating a deep copy." << endl;
        // Copy the data from the other object, not just the pointer
        copy(other.data, other.data + other.size, data);
    }
    
    // In C++11 and later, you should also implement the Move Constructor and Move Assignment Operator (Rule of Five)
    // but for now, the Rule of Three is the essential concept to learn.

    void print() const {
        for (size_t i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    cout << "Creating original array..." << endl;
    MyArray original(5); // Calls constructor
    
    cout << "\nCreating copied array..." << endl;
    MyArray copy = original; // Calls Copy Constructor

    cout << "\n'original' and 'copy' are now two independent objects with their own memory." << endl;
    cout << "'original' is about to be destroyed as main() ends..." << endl;
    
    return 0; // Both 'original' and 'copy' are destroyed here.
}