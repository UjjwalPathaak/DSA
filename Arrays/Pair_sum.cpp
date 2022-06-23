/* 
Pair Sum
Send Feedback
You have been given an integer array/list(ARR) and a number X. Find and return the total number of pairs in the array/list which sum to X.
Note:
Given array/list can contain duplicate elements. 
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Third line contains an integer 'X'.
Output format :
For each test case, print the total number of pairs present in the array/list.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= X <= 10^9
Time Limit: 1 sec
Sample Input 1:
1
9
1 3 6 2 5 4 3 2 4
7
Sample Output 1:
7
Sample Input 2:
2
9
1 3 6 2 5 4 3 2 4
12
6
2 8 10 5 -2 5
10
Sample Output 2:
0
2 */

#include <iostream>
using namespace std;
int main()
{
    int arr[100], N, count = 0, sum;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    cin >> sum;

    for(int j = 0; j < N; j++)
    {
        for(int i = j + 1; i < N; i++)
        {
           if(arr[j] + arr[i] == sum)
           {
               count++;
           }
        }
    }

    cout << count;


    return 0;
}
