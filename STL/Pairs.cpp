#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p = {1, 2};
    cout << "Pairs: " << p.first << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << "Nested Pairs: " << p2.first << p2.second.second << endl;

    pair<int, int> arr[] = {{0, 1}, {2, 3}, {4, 5}};
    cout << "Array: " << arr[1].first << endl;
    return 0;
}