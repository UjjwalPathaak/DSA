#include<bits/stdc++.h>
using namespace std;
void array_input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void largest(int arr[], int size)
{
    int largest = INT_MIN;
    int index;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] >= largest)
        {
            largest = arr[i];
            index = i;
        }
    }

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    
    cout << largest << " ";
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    array_input(arr, size);
    largest(arr, size);
    largest(arr, size - 1);
    largest(arr, size - 2);
 return 0;
}