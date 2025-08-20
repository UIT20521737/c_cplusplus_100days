#include <iostream>
#include <fstream> // Required for file I/O
#include <string>
using namespace std;

int main() {
    string filename = "my_diary.txt";

    // --- 1. Writing to a file using ofstream ---
    cout << "--- Writing to file: " << filename << " ---" << endl;
    // Create an ofstream object to open the file for writing.
    // If the file doesn't exist, it will be created.
    // If it exists, its content will be overwritten by default.
    ofstream my_output_file(filename);

    // Always check if the file was opened successfully.
    if (my_output_file.is_open()) {
        my_output_file << "Day 7 of 100 Days of C++." << endl;
        my_output_file << "Today, I learned about file I/O." << endl;

        my_output_file.close(); // Close the file when done.
        cout << "Successfully wrote to the file." << endl;
    } else {
        cout << "Error: Unable to open the file for writing." << endl;
    }

    cout << "\n----------------------------------------\n" << endl;

    // --- 2. Reading from a file using ifstream ---
    cout << "--- Reading from file: " << filename << " ---" << endl;
    string line;
    // Create an ifstream object to open the file for reading.
    ifstream my_input_file(filename);

    if (my_input_file.is_open()) {
        cout << "File content:" << endl;
        // Use a while loop with getline to read the file line by line.
        while (getline(my_input_file, line)) {
            cout << line << endl;
        }
        my_input_file.close(); // Close the file.
    } else {
        cout << "Error: Unable to open the file for reading." << endl;
    }

    return 0;
}