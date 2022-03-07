#include<bits/stdc++.h>
using namespace std;
void take_input(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
}

void sumOfTwoArrays(int arr1[], int arr2[], int size1, int size2)
{
    int last1 = size1 - 1;
    int last2 = size2 - 1;
    int sum;
    while (last1 >= 0 && last2 >= 0)
    {
        int current = arr1[last1] + arr2[last2];
        if(current > 9)
        {
            int last_digit = current % 10;
            
        }
    }
}
int main()
{
    int size1, size2;
    cin >> size1;
    int arr1[size1];
    cin >> size2;
    int arr2[size2];
    take_input(arr1, size1);
    take_input(arr2, size2);

    sumOfTwoArrays(arr1, arr2, size1, size2);
return 0;
}