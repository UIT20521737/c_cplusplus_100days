#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept> // Required for std::runtime_error
using namespace std;

void readFile(const string& filename) {
    ifstream input_file(filename);

    // Check if the file failed to open.
    if (input_file.fail()) {
        // If it fails, "throw" an exception.
        // This is like sounding an alarm.
        throw runtime_error("File could not be opened: " + filename);
    }
    
    // This part will only run if the file opened successfully.
    cout << "File '" << filename << "' opened successfully. Content:" << endl;
    string line;
    while (getline(input_file, line)) {
        cout << line << endl;
    }
    input_file.close();
}

int main() {
    // We put the function call inside a 'try' block because it might throw an exception.
    try {
        // This will succeed
        readFile("my_diary.txt"); 

        cout << "\n----------------------------------------\n" << endl;

        // This will fail and throw an exception
        readFile("non_existent_file.txt"); 
    }
    // The 'catch' block is the emergency procedure.
    // It "catches" the exception thrown from the try block.
    catch (const exception& e) {
        // e.what() gets the error message from the exception object.
        cerr << "ERROR CAUGHT: " << e.what() << endl;
    }

    cout << "\nProgram continues to run after handling the exception." << endl;

    return 0;
}