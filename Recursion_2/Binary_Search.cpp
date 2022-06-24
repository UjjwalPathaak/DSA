#include <iostream>
using namespace std;
int binary_search(int *arr, int start, int end, int target)
{
    if (end < start)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    } 

   if (arr[mid] < target)
    {
        return binary_search(arr, mid + 1, end, target);
    }

        return binary_search(arr, start, mid - 1, target);
    
}
int main()
{
    int arr[] = { 2, 3, 4, 10, 40, 55, 69, 89, 99};
    int target;
    int end = sizeof(arr) / 4;
    cout << "Enter element to search ";
    cin >> target;
    cout << binary_search(arr, 0, end - 1, target);

    return 0;
}