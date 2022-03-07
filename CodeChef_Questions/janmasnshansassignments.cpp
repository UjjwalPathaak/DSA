#include<bits/stdc++.h>
using namespace std;
bool check(int time)
{
    int remaining = 10 - time;
    if(remaining >= 3)
    {
        return true;
    }
    else
    return false;
}
int main()
{
    int t, time;
    cin >> t;
    while(t--)
    {
        int time;
        cin >> time;
        if(check(time))
        cout << "Yes" << endl;
        else
        cout << "No" << endl;
    }
return 0;
}