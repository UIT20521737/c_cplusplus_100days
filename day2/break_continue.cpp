#include <iostream>
using namespace std;
/*
    continue Statement Syntax

    // Used inside a loop (for, while, do-while)
    if (condition_to_skip_iteration) {
        continue;
    }

    // Explanation:
    // - The 'continue' statement immediately ends the *current* iteration
    //   of the enclosing loop.
    // - It skips any remaining code within the loop's body for that iteration.
    // - Program control then passes to the next iteration of the loop
    //   (i.e., to the increment step in a 'for' loop, or to the
    //   condition check in a 'while' or 'do-while' loop).
*/

/*
    break Statement Syntax

    // Used inside a loop or a switch statement
    if (condition_to_terminate) {
        break;
    }

    // Explanation:
    // - The 'break' statement immediately terminates the execution of the
    //   enclosing loop (for, while, do-while) or 'switch' statement.
    // - Program control passes to the statement that immediately follows
    //   the terminated loop or switch block.
    // - It is used to exit a loop prematurely, before its normal
    //   termination condition is met.
*/
int main(){
    cout << "## Demonstrating 'break' and 'continue' in a loop from 1 to 20 ##\n" << endl;

    for (int i = 1; i <= 20; ++i) {
        
        // Use 'continue' to skip the rest of this loop iteration for even numbers.
        if (i % 2 == 0) {
            cout << "-> Found even number " << i << ". Skipping with 'continue'." << endl;
            continue; // Immediately jumps to the next iteration (i.e., to i++)
        }

        // Use 'break' to exit the loop entirely if the number gets too high.
        if (i > 15) {
            cout << "-> Number " << i << " is > 15. Terminating loop with 'break'." << endl;
            break; // Exits the 'for' loop completely
        }

        // This line only executes for odd numbers that are not greater than 15.
        cout << "Processing number " << i << endl;
    }

    cout << "\nLoop has finished." << endl;

    return 0;
}