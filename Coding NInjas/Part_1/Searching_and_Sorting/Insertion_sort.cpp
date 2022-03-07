/* Code to sort array using insertion sort
array - 1, 2, 6, 3, 9, 7, 4 */
#include <iostream>
using namespace std;

void insertion_sort(int* array, int size)
{
    for(int i = 1; i < size; i++)
    {
        int current = array[i];
        int j;

        for(int j = i - 1; j >= 0 ; j--)
        {
            if(current < array[j])
            {
                array[j + 1] = array[j];
            }
            else
            {
                break;
            }
        }
        array[j + 1] = current;
    }
        
}

int main()
{
    int array[100] = { 1, 2, 6, 3, 9, 7, 4};
    insertion_sort(array, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}