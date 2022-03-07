
#include <bits/stdc++.h>
using namespace std;
void removeDuplicates(char arr[], int size)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        int counter = 0;
        for (int i = 0; i < size; i++)
        {
            if(arr[i + 1] == arr[i])
            {
                arr[i] = ' ';
            }
        }
    }
    //removing white space
    for (int i = 0; i < strlen(arr); i++)
    {
        if(arr[i] == ' ')
        {
            for (int j = i; j < strlen(arr); j++)
            {
                arr[j] = arr[j + 1];
            }
            i--;
        }
    }
}
int main()
{
    char arr[100];
    cin >> arr;
    int size = strlen(arr);
    removeDuplicates(arr, size);
    cout << arr;
    return 0;
}
