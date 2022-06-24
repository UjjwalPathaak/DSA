#include <bits/stdc++.h>
using namespace std;
int reverse(int num, int size)
{
    if(num < 10)
    {
        return (num%10)*pow(10, size - 1);
    }

    int ans = (num%10)*pow(10, size - 1) + reverse(num/10, size - 1);
    return ans;
}
int main()
{
    int num, size;
    cin >> size;
    cin >> num;
    cout << reverse(num, size);
    return 0;
}