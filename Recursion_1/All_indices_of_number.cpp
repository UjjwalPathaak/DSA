/* Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
indexes where x is present in the array (separated by space)

Constraints :
1 <= N <= 10^3

Sample Input :
5
9 8 10 8 8
8

Sample Output :
1 3 4 */
#include<iostream>
using namespace std;
void all_indices(int* arr, int size, int target, int index)
{
    if (size == index)
    {
        if (arr[index] == target)
        {
            cout << index << " ";
        }
            return;
        
    }
        if (arr[index] == target)
        {
            cout << index << " ";
        }
        all_indices(arr, size, target, index + 1);
    
}
int main()
{
    int size = 15;
    int arr[] = {9, 8, 10, 8, 8, 9, 19, 4, 5, 12, 8, 9, 2, 5, 9};
    int target = 8;
    all_indices(arr, size - 1, target, 0);
}