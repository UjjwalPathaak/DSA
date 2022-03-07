#include<bits/stdc++.h>
using namespace std;
int sum(int x, int y)
{
    return (x*10) + (y*5);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        cout << sum(x, y) << endl;
    }
return 0;
}