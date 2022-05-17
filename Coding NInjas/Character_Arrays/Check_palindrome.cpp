/* Check Palindrome
Send Feedback
Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.
Example:
If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards, it is said to be a valid palindrome.

The expected output for this example will print, 'true'.
From that being said, you are required to return a boolean value from the function that has been asked to implement.
Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
Output Format:
The only line of output prints either 'true' or 'false'.
Note:
You are not required to print anything. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1 :
abcdcba
Sample Output 1 :
true 
Sample Input 2:
coding
Sample Output 2:
false */

/* #include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char* arr, int size){
    int flag = true;
    int first = 0, last = size - 1;
    for (int i = 0; i < size/2; i++)
    {
        if(arr[first] != arr[last])
        {
            flag = false;
            return flag;
        }
    }
    return true;
}

int main()
{
    char arr[50];
    cin >> arr;
    int size = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        size++;
    }
    bool output = checkPalindrome(arr, size);
    if(output)
    {
        cout << "true";
    }
    else
    cout << "false";
return 0;
} */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
return 0;
}