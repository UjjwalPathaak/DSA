/* Code to sort array using bubble sort
array - 1, 2, 6, 3, 9, 7, 4 */
#include <iostream>
using namespace std;

void bubble_sort(int* array, int size)
{
    for(int i = 0; i < size - 1 ; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int array[100] = { 1, 2, 6, 3, 9, 7, 4};
    bubble_sort(array, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}