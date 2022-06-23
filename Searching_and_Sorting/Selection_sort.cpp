/* Code to sort array using selection sort
array - 1, 2, 6, 3, 9, 7, 4 */
#include <iostream>
using namespace std;

void selection_sort(int* array, int size)
{
    for (int j = 0; j < size; j++)
    {
        //finding minimum element
        int min = array[j], minarray = j;
         for (int i = j + 1; i < size; i++)
          {
            if(array[i] < min)
            {
                min = array[i];
                minarray = i;
            }
          }

        //swapping
              int temp = array[j];
              array[j] = array[minarray];
              array[minarray] = temp;
       
    }
}

int main()
{
    int array[100] = { 1, 2, 6, 3, 9, 7, 4};
    selection_sort(array, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}