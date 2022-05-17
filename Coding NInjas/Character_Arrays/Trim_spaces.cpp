/* Trim Spaces
Send Feedback
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi */

#include <iostream>
using namespace std;
int main()
{
    char arr[100];
    int size = 0;
   cin.getline(arr, 100);
    for(int i = 0; arr[i] != '\0'; i++)
    {
        size++;
    }

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == ' ')
        {
            for(int j = i; j <= size; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }

    cout << arr;
    


    return 0;
}