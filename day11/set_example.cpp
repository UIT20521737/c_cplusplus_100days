#include <iostream>
#include <set> // Required for std::set
using namespace std;

int main() {
    // Declare a set of integers
    set<int> unique_numbers;

    // Insert elements
    unique_numbers.insert(50);
    unique_numbers.insert(20);
    unique_numbers.insert(80);
    unique_numbers.insert(20); // This will be ignored because 20 already exists

    cout << "The set contains " << unique_numbers.size() << " unique elements." << endl;

    // Iterate through the set. Notice the elements are automatically sorted.
    cout << "\nElements in the set:" << endl;
    for (int num : unique_numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}