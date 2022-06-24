/* Given an integer N, count and return the number of zerosthat are present in the given integer using recursion.
Input Format :
Integer N

Output Format :
Number of zeros in N

Constraints :
0 <= N <= 10^9

Sample Input 1 :
10204

Sample Output 1 :
2

Sample Input 2 :
708000

Sample Output 2 :
4 */

#include <iostream>
using namespace std;

int count_zeros(int num)
{   
    if(num == 0)
    {
        return 0;
    }

    int lastDigit = num % 10;
    if(lastDigit == 0)
    {
        return 1 + count_zeros(num/10);
    }
    else
    {
        return count_zeros(num/10);
    }

}

int main()
{
    int num, count = 0;
    cin >> num;
    
    cout << count_zeros(num);
    return 0;
}