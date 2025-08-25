#include <iostream>
#include <vector>
#include <algorithm> // Required for std::count_if
using namespace std;

int main() {
    vector<int> numbers = {10, 25, 3, 42, 17, 8, 55};

    int threshold = 20;

    // Use std::count_if with a lambda to count numbers greater than the threshold.
    // The lambda function is defined right here.
    int count = count_if(numbers.begin(), numbers.end(), [threshold](int n) {
        // [threshold] is the capture clause, it allows the lambda to access the 'threshold' variable.
        // (int n) is the parameter list.
        // { return n > threshold; } is the function body.
        return n > threshold;
    });

    cout << "There are " << count << " numbers greater than " << threshold << "." << endl;

    return 0;
}