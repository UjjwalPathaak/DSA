#include<bits/stdc++.h>
using namespace std;
void insert(int arr[], int size)
{
    int element, position;
    cout << "enter element and index:";
    cin >> element >> position;
/*     position = position - 1; */
    for (int i = size + 1; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    

}
int main()
{
    int arr[20];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    insert(arr, size + 1);
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    
return 0;
}