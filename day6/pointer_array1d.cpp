#include <iostream>
using namespace std;

void printArr(int* arr){
    for (size_t i = 0; i < sizeof(arr); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int size = 5;
    int *arr = new int[size];

    for (size_t i = 0; i < sizeof(arr); i++){
        *(arr + i) = i * 10 + i;
    }

    printArr(arr);
    delete[] arr;
    arr = nullptr;

    return 0;
}