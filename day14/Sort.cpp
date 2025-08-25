#include "Sort.h"


Sort::Sort(){
    size_t size;
    cout << "Enter a size for vector (size > 2): ";
    cin >> size;
    for(size_t i = 0; i < size; i++){
        cout << "vec[" << i << "] = ";
        cin >> vec[i]; 
    }
}

Sort::Sort(vector <int> vec): vec(std::move(vec)){
    // cout << "Inital vector!" << endl;
}

void Sort::print_vector(){
    for(size_t i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

void Sort::bubble_sort(){
    size_t n = vec.size();
    if (n < 2) return;

    for (size_t i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        // If no swaps in a pass, the vector is sorted
        if (!swapped) {
            break;
        }
    } 
}

void Sort::insertion_sort() {
    size_t n = this->vec.size();
    if (n < 2) return;

    // Iterate from the second element (index 1) to the end
    for (size_t i = 1; i < n; ++i) {
        int key = vec[i]; // The element we want to insert into the sorted portion
        int j = i - 1;

        // Move elements of the sorted portion [0..i-1] that are greater than key
        // one position to their right to make space for the key.
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        // Place the key in its correct sorted position
        vec[j + 1] = key;
    }
}
// --- Selection Sort ---
void Sort::selection_sort() {
    size_t n = vec.size();
    if (n < 2) return;

    for (size_t i = 0; i < n - 1; ++i) {
        size_t min_index = i;
        for (size_t j = i + 1; j < n; ++j) {
            if (vec[j] < vec[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(vec[i], vec[min_index]);
        }
    }
}

// --- Merge Sort (Public Wrapper) ---
void Sort::merge_sort() {
    if (vec.size() < 2) return;
    // Start the recursive process on the entire vector
    merge_sort_recursive(0, vec.size() - 1);
}

// --- Quick Sort (Public Wrapper) ---
void Sort::quick_sort() {
    if (vec.size() < 2) return;
    // Start the recursive process on the entire vector
    quick_sort_recursive(0, vec.size() - 1);
}


// =======================================================
// PRIVATE HELPER METHODS (Add these to your Sort.h file)
// =======================================================

// --- Merge Sort Helpers (Private) ---
void Sort::merge(int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = vec[left + i];
    for (int j = 0; j < n2; j++) R[j] = vec[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k++] = L[i++];
        } else {
            vec[k++] = R[j++];
        }
    }
    while (i < n1) vec[k++] = L[i++];
    while (j < n2) vec[k++] = R[j++];
}

void Sort::merge_sort_recursive(int left, int right) {
    if (left >= right) return; // Base case

    int mid = left + (right - left) / 2;
    merge_sort_recursive(left, mid);
    merge_sort_recursive(mid + 1, right);
    merge(left, mid, right);
}

// --- Quick Sort Helpers (Private) ---
int Sort::partition(int low, int high) {
    int pivot = vec[high]; // Choose the last element as the pivot
    int i = (low - 1);   // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        if (vec[j] < pivot) {
            i++;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[high]);
    return (i + 1);
}

void Sort::quick_sort_recursive(int low, int high) {
    if (low < high) { // Base case
        int pi = partition(low, high);
        quick_sort_recursive(low, pi - 1);
        quick_sort_recursive(pi + 1, high);
    }
}
