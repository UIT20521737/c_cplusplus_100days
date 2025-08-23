#include <iostream>
#include <vector> // Required for std::vector
#include <string>
using namespace std;

int main() {
    // Declare a vector of strings
    vector<string> names;

    // Add elements to the end using .push_back()
    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");

    // Get the number of elements using .size()
    cout << "The vector has " << names.size() << " names." << endl;

    // Access elements using the safe .at() method or the faster [] operator
    cout << "The first name is: " << names.at(0) << endl;

    // Iterate through the vector using a range-based for loop (Modern C++)
    cout << "\nAll names in the vector:" << endl;
    for (const string& name : names) {
        cout << "- " << name << endl;
    }

    // Remove the last element
    names.pop_back();
    cout << "\nAfter pop_back(), the last name is now: " << names.back() << endl;

    return 0;
}