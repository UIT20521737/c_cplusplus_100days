#include "Sort.h"
#include <random>     // For generating random numbers
#include <algorithm>  // For std::generate
#include <chrono> // Required for chrono library
void test_sort_algorithsm(vector<int> vec, int option){
    Sort st(vec);
    // cout<<"Original Vector: ";
    // st.print_vector();
    auto start_time = chrono::high_resolution_clock::now();
    switch(option){
        case 1:
            st.bubble_sort();
            break;
        case 2:
            st.selection_sort();
            break;
        case 3:
            st.quick_sort();
            break;
        case 4:
            st.merge_sort();
            break;
        case 5:
            st.insertion_sort();
            break;
        default:
            cout << "No process!"<<endl;
    }
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time);
    // cout<<"Sorted Vector: ";
    // st.print_vector();
     switch(option){
        case 1:
            cout << "Execution time of bubble sort: " << duration.count() << " microseconds." << endl;
            break;
        case 2:
            cout << "Execution time of selection sort: " << duration.count() << " microseconds." << endl;
            break;
        case 3:
            cout << "Execution time of quick sort: " << duration.count() << " microseconds." << endl;
            break;
        case 4:
            cout << "Execution time of merge sort: " << duration.count() << " microseconds." << endl;
            break;
        case 5:
            cout << "Execution time of intertion sort: " << duration.count() << " microseconds." << endl;
            break;
        default:
            cout << "No process!"<<endl;
    }
  
}
int main(){
    // 1. Use a much larger vector size
    const int VECTOR_SIZE = 20000;

    // 2. Setup for random number generation
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 10000);

    // Create the base vector with random data
    vector<int> original_vec(VECTOR_SIZE);
    generate(original_vec.begin(), original_vec.end(), [&]() { return distrib(gen); });
    cout << "Vector size: "<< VECTOR_SIZE<<endl;
    for(int i = 1; i < 6; i++){
        cout<<"--------Testcase "<<i<<"--------"<<endl;
        test_sort_algorithsm(original_vec, i);
    }
    return 0;
}