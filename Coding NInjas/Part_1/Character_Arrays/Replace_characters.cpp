/*  Replace Character
Send Feedback
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd*/
#include <iostream>
using namespace std;
int main()
{
    char arr[100];
    char word, replace;
    int size = 0;
    cin >> arr;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        size++;
    }
    cin >> word >> replace;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == word)
        {
            arr[i] = replace;
        }
    }

    cout << arr;
    return 0;
}