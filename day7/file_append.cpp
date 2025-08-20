#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "my_diary.txt";

    // To append, open the file with the 'ios::app' (append mode) flag.
    ofstream my_output_file(filename, ios::app);

    if (my_output_file.is_open()) {
        my_output_file << "This is a new entry, added at the end." << endl;
        my_output_file.close();
        cout << "Successfully appended to the file." << endl;
        cout << "Try running this program multiple times!" << endl;
    } else {
        cout << "Error: Unable to open the file." << endl;
    }

    return 0;
}