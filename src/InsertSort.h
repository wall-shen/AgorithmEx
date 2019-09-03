#ifndef INSERTSORTH
#define INSERTSORTH
#include<iostream>
#include<vector>
#include"Swap.h"
using namespace std;

template<class T>
void InsertSort(vector<T>& array)
{
    for(int i = 1; i < array.size(); i++)
    {
        if(array[i] >= array[i - 1])
            continue;
        
        T temp = array[i];
        int j;
        for(j = i - 1; j >= 0 && array[j] > temp; j--)
            array[j+1] = array[j];
        array[j+1] = temp;
    }
}

template<class T>
void InsertSortBS(vector<T>& array)
{
    for(int i = 1; i < array.size(); i++)
    {
        if(array[i] >= array[i - 1])
            continue;

        T temp = array[i];
        int low = 0, high = i - 1;
        while(low <= high)
        {
            int mid = (high + low) / 2;
            if(array[mid] > temp)
                high = mid - 1;
            else
                low = mid + 1;
        }
        for(int j = i - 1; j > high; j--)
        {
            array[j + 1] = array[j];
        }
        array[high + 1] = temp;
    }
}

template<class T>
void ShellSort(vector<T>& array)
{
    for(int gap = array.size() / 2;  gap > 0; gap /= 2)
        for(int i = gap; i < array.size(); i++)
            for(int j = i - gap; j >= 0 && array[j] >  array[j + gap]; j -= gap)
                Swap(array, j, j + gap);
}
#endif