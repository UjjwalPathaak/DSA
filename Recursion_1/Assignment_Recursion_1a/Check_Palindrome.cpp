/* Check Palindrome (recursive)
Send Feedback
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false */
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
bool palindrome(string s, int last, int start)
{
    if(last <= start)
    {
        return true;
    }
    if(s[start] != s[last])
    {
        return false;
    }
   
    return palindrome(s,last-1, start+1);
    
}

int main()
{
    string s;
    cin >> s;
    bool ans = palindrome(s,s.length() - 1, 0);
    if(ans)
    cout << "true";
    else
    cout << "false";
    return 0;
}
