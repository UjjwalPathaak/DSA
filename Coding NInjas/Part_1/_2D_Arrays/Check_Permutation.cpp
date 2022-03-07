#include <bits/stdc++.h>
using namespace std;
void sort(char array[], int size)
{
    sort(array, array + size);
}

bool compare(char arr[], char arr2[], int size, int size2)
{
    bool ans;
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr2[j])
        {
            ans = true;
        }
        else
        {
            ans = false;
        }
        j++;
    }
    return ans;
}

int main()
{
    char arr[20], arr2[20];
    cin >> arr;
    cin >> arr2;
    int size = strlen(arr);
    int size2 = strlen(arr2);
    sort(arr, size);
    sort(arr2, size);
    int ans = compare(arr, arr2, size, size2);

    if (ans)
        cout << "true";
    else
        cout << "false";
    return 0;
}