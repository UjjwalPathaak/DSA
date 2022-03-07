/* Sum of Even Numbers till N
Send Feedback
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12 */
#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    cout << sum;
    return 0;
}
