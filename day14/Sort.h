#ifndef SORT_H
#define SORT_H
#include <vector>
#include <iostream>
#include <utility>
using namespace std;
class Sort{
    private:
        vector<int> vec;
    public:
        Sort();
        Sort(vector<int> vec);
        void bubble_sort();
        void insertion_sort();
        void selection_sort();
        void merge_sort();
        void quick_sort();
        void print_vector();
        void quick_sort_recursive(int low, int high);
        int partition(int low, int high);
        void merge_sort_recursive(int left, int right);
        void merge(int left, int mid, int right);
};
#endif