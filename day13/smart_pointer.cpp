#include <iostream>
#include <memory> // Required for smart pointers
#include <string>
using namespace std;

class Resource {
public:
    Resource() { cout << "Resource created." << endl; }
    ~Resource() { cout << "Resource destroyed." << endl; }
};

int main() {
    cout << "--- Using unique_ptr ---" << endl;
    { // Create a new scope
        // Create a Resource object on the Heap, managed by a unique_ptr.
        // std::make_unique is the recommended way to create unique_ptrs (since C++14).
        unique_ptr<Resource> res_ptr = make_unique<Resource>();
    } // res_ptr goes out of scope here, and the Resource destructor is automatically called.
      // NO 'delete' is needed!

    cout << "\nMain function finished." << endl;
    return 0;
}