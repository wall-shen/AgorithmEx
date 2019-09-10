#ifndef SELECTSORTH
#define SELECTSORTH

#include "Swap.h"

template <class T>
void SelectSort(vector<T>& array){
    for(int i  = 0; i < array.size() - 1; i++){
        int min = i;
        for(int j = array.size() - 1; j > i; j--) {
            if(array[j] < array[min])
                min = j;
        }
        if(min != i)
            Swap(array, min, i);
    }
}

template <class T>
void HeapAdjust(vector<T>& array, int i, int len){
    int left = i * 2 + 1;
    int right = i * 2 + 2;
    int largest = i;
    if(left < len && array[left] > array[largest])
        largest = left;
    if(right < len && array[right] > array[largest])
        largest = right;
    if(largest != i){
        Swap(array, largest, i);
        HeapAdjust(array, largest, len);
    }
}

template <class T>
void HeapBuild(vector<T>&  array){
    for(int i = array.size() / 2 - 1; i >= 0; i--){
        HeapAdjust(array, i , array.size());
    }
}

template <class T>
void HeapSort(vector<T>& array){
    HeapBuild(array);
    int len = array.size();
    for(int i = array.size() - 1; i > 0; i--){
        Swap(array, 0, i);
        HeapAdjust(array, 0, --len);
    }
}

#endif