#include <iostream>
#include <map> // Required for std::map
#include <string>
using namespace std;

int main() {
    // Declare a map where the key is a string and the value is an int
    map<string, int> student_scores;

    // Add key-value pairs
    student_scores["John"] = 85;
    student_scores["Jane"] = 92;
    student_scores["Peter"] = 78;

    // The key "John" already exists, so this will update its value
    student_scores["John"] = 88;

    // Access a value using its key
    cout << "Jane's score is: " << student_scores["Jane"] << endl;

    // Iterate through the map to see all pairs
    cout << "\nAll student scores:" << endl;
    for (const auto& pair : student_scores) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}