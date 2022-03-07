/* Multiplication (Recursive)
Send Feedback
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format :
Line 1 : Integer M
Line 2 : Integer N
Output format :
M x N
Constraints :
0 <= M <= 1000
0 <= N <= 1000
Sample Input 1 :
3 
5
Sample Output 1 :
15
Sample Input 2 :
4 
0
Sample Output 2 :
0 */
/* #include <iostream>
using namespace std;

int multiplication(int n, int m)
{
    //base case
    if(n == 0)
    {
        return 0;
    }
    return m + multiplication(n - 1, m);

}

int main()
{
    int n, m; 
    cin >> n >> m;    
    cout << multiplication(n, m);
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
int multiplication(int n, int m)
{
    if (m == 1)
    {
        return n;
    }

    return n + multiplication(n, m - 1);
    
}
int main()
{
    int n, m;
    cin >> n >> m ;
    cout << multiplication(n, m);
return 0;
}