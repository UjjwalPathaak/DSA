/* Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
first index or -1

Constraints :
1 <= N <= 10^3

Sample Input :
4
9 8 10 8
8

Sample Output :
1 */
#include<bits/stdc++.h>
using namespace std;
int find(int* arr, int size, int target, int index)
{
    if(size == 0)
    {
        if (arr[index] == target)
        {
            return index;
        }
        return -1;
    }

    if(arr[index] == target)
    {
        return index;
    }
    else
    find(arr, size, target, index - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << find(arr, size - 1, 9, size - 1);
 return 0;
}