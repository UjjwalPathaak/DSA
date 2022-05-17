#include <bits/stdc++.h>
using namespace std;
int firstIndex(int arr[], int size, int x, int index)
{
    if (size == 0)
        return 0;

    index++;
    
    if (arr[index] == x)
        return index;

    return firstIndex(arr, size - 1, x, index);
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

    int ans = firstIndex(array, size, x, 0);
    cout << ans;
    return 0;
}