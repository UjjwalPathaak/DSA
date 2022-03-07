/*
Write Code to find x using binary search
and return the position of an element from this array
| 12 | 14 | 15 | 66 | 77 | 85 |
*/

#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int X)
{
    int start = 0, end = size - 1;
    while (size != 0)
    {
        int mid = (start + end) / 2;
        if (X == arr[mid])
        {
            return mid;
        }
        else if (X > arr[mid])
        {
            start = mid;
        }
        else if (X < arr[mid])
        {
            end = mid;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 5, 7, 9, 19, 29, 33};
    int size = 7;
    int X;
    cin >> X;
    int element = binarySearch(arr, size, X);
    cout << element;
    return 0;
}