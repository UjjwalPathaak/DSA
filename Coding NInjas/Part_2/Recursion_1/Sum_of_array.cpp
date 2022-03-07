/* Sum of Array
Send Feedback
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 9
Sample Output 1 :
26
Sample Input 2 :
3
4 2 1
Sample Output 2 :
7
 */

/* #include <iostream>
using namespace std;

int sum(int input[], int n)
{
    if(n == 0)
    return 0;

    return input[0] + sum(input + 1, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int *input = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout << sum(input, n) << endl;
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int arr_sum(int arr[], int size)
{
    if (size == 0)
        return 0;

    return arr[0] + arr_sum(arr + 1, size - 1);
}

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << arr_sum(arr, size);
    return 0;
}