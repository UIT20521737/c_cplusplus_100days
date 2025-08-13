#include  <iostream>
using namespace std;
int main(){
    /*
        for loop Syntax

        for (initialization; condition; increment) {
            // code_block_to_execute
        }

        // Explanation:
        // - The 'initialization' statement is executed once before the loop starts.
        //   It's typically used to declare and initialize a loop counter variable.
        // - The 'condition' is evaluated before each iteration. If it's true,
        //   the code block is executed. If it's false, the loop terminates.
        // - The 'increment' statement is executed at the end of each iteration,
        //   usually to update the loop counter.
        // - This loop is ideal when you know the exact number of iterations.
    */

    for (int i = 2; i < 10; i++){
        for (int j = 1; j < 11; j++){
            cout << i << " x " << j << " = " << i*j << endl;
        }
        cout << "----------------\n";
    }
}