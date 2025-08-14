#include <iostream>
using namespace std;

void print_array2d(int arr[2][4]){
    cout << "{" << endl;
    for (int i = 0; i < 2; i++){
        cout << "\t{ ";
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";  
        }
        cout << "}" << endl;
    }
    cout << "}" << endl;
}

int main(){
    /*
        2D Array (Matrix) Syntax

        data_type array_name[ROWS][COLUMNS];

        // Explanation:
        // - A 2D array is essentially an "array of arrays". It organizes elements
        //   in a grid-like structure of rows and columns.
        // - ROWS specifies the number of rows.
        // - COLUMNS specifies the number of columns in each row.
        //
        // - Initialization is done with nested curly braces, where each inner
        //   brace represents a row.
        //   e.g., int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
        //
        // - Accessing an element requires two indices: array_name[rowIndex][columnIndex].
        //   Both indices start from 0.
    */

    int my_arr2d_a[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    int my_arr2d_b[2][4] = {
        {8, 7, 6, 5},
        {4, 3, 2, 1}
    };

    cout << "matrix A: " << endl;
    print_array2d(my_arr2d_a);

    cout << "matrix B: " << endl;
    print_array2d(my_arr2d_b);

    cout << "matrix sum of A and B: " << endl;
    int my_arr2d_sum[2][4];
    // To iterate through a 2D array, nested loops are used.
    // The outer loop for rows, the inner loop for columns.
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            my_arr2d_sum[i][j] = my_arr2d_a[i][j] + my_arr2d_b[i][j];
        }
    }
    print_array2d(my_arr2d_sum);
    
    return 0;
}