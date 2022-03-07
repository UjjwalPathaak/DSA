#include <bits/stdc++.h>
using namespace std;
bool winner(int num, int move)
{
    if (num % 2 == 0)
    {
        if (move % 2 == 0)
        {
            return true;
        }
        else if (move % 2 != 0)
        {
            return false;
        }
    }
    else if (num % 2 != 0)
    {
         if (move % 2 == 0)
        {
            return false;
        }
        else if (move % 2 != 0)
        {
            return true;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int moves, number;
        cin >> number >> moves;
        if (winner(number, moves))
            cout << "Janmansh" << endl;
        else
            cout << "Jay" << endl;
    }
    return 0;
}