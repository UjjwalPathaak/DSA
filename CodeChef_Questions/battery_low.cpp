#include<bits/stdc++.h>
using namespace std;
void output(int battery)
{
    if (battery <= 15)
    {
        cout << "Yes" << endl; ;
    }
    else
    cout << "No" << endl;;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int battery;
    cin >> battery;
    output(battery);
        /* code */
    }
    
return 0;
}