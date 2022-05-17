/* Reverse Word Wise
Send Feedback
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always */

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string input, int size)
{
    int start = 0, end;
    string result = "";
    while (start < size)
    {
        while (start < size && input[start] == ' ')
        {
            start++;
        }
        end = start + 1;
        while (end < size && input[end] != ' ')
        {
            end++;
        }
        string word = input.substr(start, end - start);
        if (result == "")
        {

            result = word;
            start = end + 1;
        }
        else
        {
            result = word + " " + result;
            start = end + 1;
        }
    }
    return result;
}
int main()
{
    string input;
    getline(cin, input);
    int size = input.length();
    cout << reverseWord(input, size);
    return 0;
}
