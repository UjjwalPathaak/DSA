/* Check if the array is sorted or not using recursion */
/* 
Using Recursion find the nth term
of the finbinacci series:-
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
*/

#include<bits/stdc++.h>
using namespace std;

int is_sorted(int *arr, int size)
{ 
    if(size == 0)
    {
        return 0;
    }
    if(arr[size] < arr[size - 1])
    {
        return -1;
    }
    is_sorted(arr, size - 1);
}

int main()
{
    int arr[] = {1, 8, 5, 6, 8, 2, 5, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = is_sorted(arr, size - 1);
    cout << ans;
   
return 0;
}