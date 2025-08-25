#include <iostream>
#include <string>
#include <vector>
#include <utility> // For std::swap
using namespace std;

// Function to find all permutations of a string
// str: the string to permute
// index: the starting index for the current permutation step
void permute(string& str, int index) {
    // Base Case: If we've reached the end of the string,
    // we have found one complete permutation.
    if (index >= str.length()) {
        cout << str << endl;
        return;
    }

    // Recursive Step: Iterate through the remaining characters
    for (size_t i = index; i < str.length(); i++) {
        // 1. Choose: Swap the current character with the character at 'index'.
        swap(str[index], str[i]);

        // 2. Explore: Recursively call for the rest of the string.
        permute(str, index + 1);

        // 3. Un-choose (Backtrack): Swap them back to restore the original
        // state for the next iteration of the loop. This is the crucial step.
        swap(str[index], str[i]);
    }
}

int main() {
    string my_string = "ABC";
    cout << "All permutations of the string '" << my_string << "':" << endl;
    
    permute(my_string, 0);

    return 0;
}