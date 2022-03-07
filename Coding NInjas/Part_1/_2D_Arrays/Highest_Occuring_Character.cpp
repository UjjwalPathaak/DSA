#include <bits/stdc++.h>
using namespace std;
char highesOccuringCharacter(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int counter = 0;
        char maxAlphabet = 'l';
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                counter++;
            }
            if (i = 0)
                break;
        }
    }
}
int main()
{
    char arr[100];
    cin >> arr;
    int size = strlen(arr);
    char output = highesOccuringCharacter(arr, size);
    cout << output;
    return 0;
}