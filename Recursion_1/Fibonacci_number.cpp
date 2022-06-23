/* 
Using Recursion find the nth term
of the finbinacci series:-
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
*/

#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    //base case
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }

    //calculation
    int soLast = fib(n - 1);
    int soLast2Last = fib(n - 2);

    //recursion
    return soLast + soLast2Last;
}

int main()
{
    int N;
    cin >> N;
    cout << fib(N) << "\n";
return 0;
}