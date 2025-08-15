#include <iostream>
using namespace std;

void enter_matrix(int** matrix, size_t rows, size_t cols){
    for (size_t i = 0; i < rows; i++){
        for (size_t j = 0; j < cols; j++){
            cout << "matrix[" << i <<"]["<<j<<"]"<<" = ";
            cin >> matrix[i][j];
        }
    }
}

void print_matrix(int** matrix, size_t rows, size_t cols){
    for (size_t i = 0; i < rows; i++){
        for (size_t j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    size_t cols = 5, rows = 3;

    int **matrix = new int*[rows];

    for (size_t i = 0; i < sizeof(matrix); i++){
        matrix[i] = new int[cols];
    }

    enter_matrix(matrix, rows, cols);
    print_matrix(matrix, rows, cols);

    for (size_t i = 0; i < rows; i++){
        delete []matrix[i];
    }
    delete []matrix;
    matrix = nullptr;
    return 0;
}