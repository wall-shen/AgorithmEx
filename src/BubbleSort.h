#ifndef BUBBLESORTH
#define BUFFLESORTH

#include <vector>
#include "Swap.h"
using namespace std;

template<class T>
void BubbleSort(vector<T>& array)
{
    for(int i = 0; i < array.size() - 1; i++)
    {
        bool flag = true;
        for(int j = array.size() - 1; j > i; j--){
            if(array[j] < array[j - 1])
                Swap(array, j , j - 1);
                flag = false;
        }
        if(flag)
            return;
    }
}
template <class T>
 void QuickSort(vector<T>& array, int low, int high){
     if(low >= high) return;
     int index = low + 1;
     for(int i = low + 1; i <= high; i++)
     {
         if(array[low] > array[i])
         { 
             if(i != index)
                Swap(array, i, index);
            index++;
         }
     }
    Swap(array, low, index-1);
    QuickSort(array,  low, index-2);
    QuickSort(array, index, high);
 }
#endif