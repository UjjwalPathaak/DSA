#include <bits/stdc++.h>
using namespace std;
int lastIndex(int arr[], int size, int x, int index, int last)
{
    if (size == 0)
        return last;

    index++;

    if (arr[index] == x)
    {
        last = index;
    }

    return lastIndex(arr, size - 1, x, index, last);
}
int main()
{
    int size;
    cin >> size;
    int x;
    cin >> x;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int ans = lastIndex(array, size, x, 0, 0);
    cout << ans;
    return 0;
}