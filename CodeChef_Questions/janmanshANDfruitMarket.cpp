#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int fruits, a, b, c;
        cin >> fruits >> a >> b >> c;
        if (a <= b && a <= c)
        {
            if (b <= c)
            {
                cout << (fruits - 1) * a + b << endl;
                continue;
            }
            else
                cout << (fruits - 1) * a + c << endl;
            continue;
        }
        if (b <= a && b <= c)
        {
            if (a <= c)
            {
                cout << (fruits - 1) * b + a << endl;
                continue;
            }
            else
            {
                cout << (fruits - 1) * b + c << endl;
                continue;
            }
        }
        if (c <= a && c <= b)
        {
            if (a <= b)
            {
                cout << (fruits - 1) * c + a << endl;
                continue;
            }
            else
            {
                cout << (fruits - 1) * c + b << endl;
                continue;
            }
        }
    }
    return 0;
}