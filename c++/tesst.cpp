#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int sorted_array[], int left, int right, int element) 
{ 
    if (right >= left) 
    { 
        int middle = (left + right) / 2; 
        // If the element is present at the middle itself 
        if (sorted_array[middle] == element) 
            return middle; 
        // If element < middle, then it can only be present in left subarray 
        if (sorted_array[middle] > element) 
            return BinarySearch(sorted_array, left, middle - 1, element); 
        // Else the element can only be present in right subarray 
        return BinarySearch(sorted_array, middle + 1, right, element); 
    } 
    // We reach here when element is not 
    // present in array 
    return -1;  
} 
int main()
{
    int a[] = { 1, 5, 7, 3, 4, 8, 2, 9, 6 };
    int element = 5;
    int size = sizeof(a) / sizeof(a[0]); 
    sort(a, a + size);
    int result = BinarySearch(a, 0, size - 1, element); 
    if(result == -1)
        cout<<"Element is not present in array";
    else
        cout<<"Element is present at index "<< result;
    return 0;
}
