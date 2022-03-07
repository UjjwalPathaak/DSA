#include <bits/stdc++.h>
using namespace std;
bool is_sorted(int arr[], int size)
{
    if (size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    is_sorted(arr, size - 1);

    return true;
}
int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (is_sorted(arr, size))
    {
        cout << "Is Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }
    return 0;
}