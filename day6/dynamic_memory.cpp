#include <iostream>
using namespace std;

int main(){

    // --- 1. Allocating a single variable on the Heap ---
    cout << "--- 1. Dynamic single variable ---" << endl;
    int* ptr_int = nullptr; // Always initialize pointers to null

    // 'new int' requests memory for one integer from the Heap.
    // The address of that memory is stored in our pointer.
    ptr_int = new int;      
    cout << "Memory address allocated on Heap: " << ptr_int << endl;

    *ptr_int = 123;         // Use the allocated memory via the pointer
    cout << "Value of dynamic integer: " << *ptr_int << endl;

    // 'delete' returns the memory to the system to prevent memory leaks.
    delete ptr_int;         
    ptr_int = nullptr;      // Best practice: set pointer to null after deleting.
    cout << "Memory has been freed." << endl;
    cout << "--------------------------------\n" << endl;


    // --- 2. Allocating a dynamic array on the Heap ---
    cout << "--- 2. Dynamic array ---" << endl;
    int size;
    cout << "Enter the size for a new array: ";
    cin >> size;

    int* ptr_array = nullptr;
    // 'new int[size]' requests memory for an array of 'size' integers.
    ptr_array = new int[size]; 
    cout << "Allocated an array of size " << size << " on the Heap." << endl;
    
    // Use the dynamic array just like a normal one
    for (int i = 0; i < size; ++i) {
        ptr_array[i] = i * 10;
        cout << ptr_array[i] << " ";
    }
    cout << endl;

    // IMPORTANT: Use delete[] for arrays allocated with new[].
    delete[] ptr_array;
    ptr_array = nullptr;

    cout << "Array memory has been freed." << endl;
    return 0;
}