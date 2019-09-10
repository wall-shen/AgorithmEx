#ifndef MERGESORTH
#define MERGESORTH

#include "Swap.h"

template <class T>
void Merge(vector<T>& array, int low, int mid, int high) {
    int temp[high - low + 1];
    for(int i = 0; i < high - low + 1; i++){
        temp[i] = array[low + i];
    }
    int i = 0, j = mid - low + 1, k = low;
    while(i <= mid - low && j <= high - low){
        if(temp[i] < temp[j])
            array[k++] = temp[i++];
        else
            array[k++] = temp[j++];
    }

    while(i <= mid - low) array[k++] = temp[i++];
    while(j <= high - low) array[k++] = temp[j++];
}

template <class T>
void MergeSort(vector<T>& array, int low, int high){
    if(low >= high)
        return;
    int mid = (low + high) / 2;
    MergeSort(array, low , mid);
    MergeSort(array, mid + 1, high);
    Merge(array, low, mid, high);
}

#endif