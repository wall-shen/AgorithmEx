#include <iostream>
#include  <vector>
#include "InsertSort.h"
#include "BubbleSort.h"
#include "SelectSort.h"
#include "MergeSort.h"
using namespace std;

int main()
{
    vector<int> a = {9, 8, 7, 4, 3, 2, 6, 5, 1};
    MergeSort(a, 0, a.size() - 1);
    for(auto it = a.begin(); it != a.end(); it++)
        cout << *it << " "; 

}
 