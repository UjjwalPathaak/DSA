/* Given an integer num, return the number of steps to reduce it to zero.
in one step, if current number is even, you have to divide it by 2,
otherwise you have to subtract 1 from it. */
#include<iostream>
using namespace std;
int steps(int num)
{
    if (num == 0)
    {
        return 0;
    }

    if (num % 2 == 0)
    {
        return 1 + steps(num/2);
    }
    else
    {
        return 1 + steps(num-1);
    }
    
}
int main()
{
    int num;
    cin >> num;

    cout << steps(num);
    return 0;
}