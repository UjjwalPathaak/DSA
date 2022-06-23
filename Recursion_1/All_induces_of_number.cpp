#include <bits/stdc++.h>
using namespace std;
void lastIndex(int arr[], int size, int x, int index, int last)
{
    if (size == 0)
        return;

    index++;

    if (arr[index] == x)
    {
        cout << index << " ";
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

    lastIndex(array, size, x, 0, 0);

    return 0;
}