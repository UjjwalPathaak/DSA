/* Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces */
#include<bits/stdc++.h>
using namespace std;
int sumofarray(int *arr, int size)
{
    if (size == 0)
    {
       return arr[size];
    }

    return arr[size] + sumofarray(arr, size - 1);
    
}
int main()
{
    int arr[] = {3, 5, 7, 9, 10, 34, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << sumofarray(arr, size - 1);
return 0;
}