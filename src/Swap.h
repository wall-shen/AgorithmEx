#ifndef SWAPH
#define SWAPH
#include<vector>

using namespace std;

template<class T>
void Swap(vector<T>& array, int a, int b)
{
    T temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

#endif