#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter a single alphabet character: ";
    cin >> c;
    /*
        switch / case Syntax

        switch (variable) {
            case value1:
                // code_block_1 to execute if variable == value1
                break;
            case value2:
                // code_block_2 to execute if variable == value2
                break;
            // ... more cases can be added
            default:
                // default_code_block to execute if no case matches
                break;
        }

        // Explanation:
        // - The 'variable' is evaluated once.
        // - Its value is compared against the value of each 'case'.
        // - If a match is found, the corresponding code block is executed.
        // - The 'break' statement is crucial; it exits the switch block and stops
        //   execution from "falling through" to the next case.
        // - The 'default' block is optional and runs if no other case matches.
    */
    switch (c) {
        // All these cases will "fall through" to the same code block
        // because they don't have a 'break'.
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << "'" << c << "' is a vowel." << endl;
            break; // Exit the switch after a vowel is found

        default: // If the character is not any of the vowels above
            cout << "'" << c << "' is a consonant." << endl;
            break;
    }

    return 0;
}