#include <iostream>
using namespace std;

int main() {
    /*
        while and do-while loop Syntax

        // while loop
        while (condition) {
            // code_block_to_execute
        }

        // do-while loop
        do {
            // code_block_to_execute
        } while (condition);

        // Explanation:
        // - A 'while' loop evaluates the 'condition' *before* executing the code block.
        //   If the condition is initially false, the code block will never run.
        // - A 'do-while' loop executes the code block *first*, then evaluates the 'condition'.
        //   This guarantees that the code block is executed at least once.
    */

    cout << "## Part 1: When the condition is initially TRUE ##\n" << endl;
    cout << "In this case, 'while' and 'do-while' produce identical results." << endl;
    cout << "--------------------------------------------------------" << endl;

    // --- Basic 'while' loop ---
    cout << "## Using 'while' to count 0 to 10 ##" << endl;
    int counter1 = 0;
    while (counter1 <= 10){
        cout << counter1 << " ";
        counter1++;
    }
    cout << "\n--------------------------------------------------------" << endl;


    // --- Basic 'do-while' loop ---
    cout << "## Using 'do-while' to count 0 to 10 ##" << endl;
    int counter2 = 0;
    do {
        cout << counter2 << " ";
        counter2++;
    } while (counter2 <= 10);
    cout << endl;


    cout << "\n========================================================\n" << endl;


    cout << "## Part 2: When the condition is initially FALSE ##\n" << endl;
    cout << "Here, the difference becomes clear." << endl;
    cout << "--------------------------------------------------------" << endl;

    // --- 'while' loop with a false condition ---
    cout << "## Testing 'while' with a false condition ##" << endl;
    int counter3 = 10;
    cout << "Initial value of counter3: " << counter3 << endl;

    // The condition (counter3 < 10) is false from the start.
    cout << "Checking condition 'while (counter3 < 10)'..." << endl;
    while (counter3 < 10) {
        // This code block will NEVER execute.
        cout << "This line inside the 'while' loop will not be printed." << endl;
        counter3++;
    }
    cout << "Result: The 'while' loop was skipped entirely." << endl;
    cout << "--------------------------------------------------------" << endl;
    
    // --- 'do-while' loop with a false condition ---
    cout << "## Testing 'do-while' with a false condition ##" << endl;
    int counter4 = 10;
    cout << "Initial value of counter4: " << counter4 << endl;

    // The 'do' block executes ONCE before the condition is checked.
    cout << "Executing the 'do' block..." << endl;
    do {
        // This code block WILL execute exactly once.
        cout << "This line inside the 'do-while' loop is printed once." << endl;
        counter4++;
    } while (counter4 < 10); // The condition (now 11 < 10) is checked here and is false.
    
    cout << "Result: The 'do-while' loop ran once and then stopped." << endl;

    return 0;
}