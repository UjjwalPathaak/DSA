/* Check Number
Send Feedback
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
'true' or 'false'
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 10
8
Sample Output 1 :
true
Sample Input 2 :
3
9 8 10
2
Sample Output 2 :
false */

#include <iostream>
using namespace std;
bool is_num(int arr[], int size, int x)
{
    if (arr[0] == x && size == 0)
    {
        return true;
    }
    else if (arr[0] == x)
    {
        return true;
    }
    else if(arr[0] != x && size == 0)
    {
        return false;
    }
    
   bool isPresent = is_num(arr + 1, size - 1, x);

    return isPresent;
}
int main()
{
    int size;
    cin >> size;
    int x;
    cin >> x;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (is_num(arr, size, x))
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
    }
    return 0;
}