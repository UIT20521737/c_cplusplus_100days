#include <iostream>
using namespace std;
int main(){
    /*
        if / else if / else Syntax

        if (expression1) {
            <code_block_1>
        } else if (expression2) {
            <code_block_2> 
        } else {
            <code_block_3>
        }

        // - If expression1 true code_block_1 will execute 
        // - Otherwise, if expression2 true code_block_2 will execute 
        // - If neither expression1 nor expression2 is true, code_block_3 will execute
    */
    int score;
    cout << "Enter a score (0-100): ";
    cin >> score;
    // First, check if the input is valid
    if (score < 0 || score > 100) {
        cout << "Error: Score must be between 0 and 100." << endl;
    }   
    
    // If the score is valid, proceed to grade it
    else if (score >= 90) {
        cout << "Grade: A (Excellent)" << endl;
    } 
    else if (score >= 80) {
        cout << "Grade: B (Good)" << endl;
    } 
    else if (score >= 70) {
        cout << "Grade: C (Average)" << endl;
    } 
    else if (score >= 60) {
        cout << "Grade: D (Below Average)" << endl;
    } 
    // If none of the above conditions are met
    else {
        cout << "Grade: F (Fail)" << endl;
    }
    return 0;
}