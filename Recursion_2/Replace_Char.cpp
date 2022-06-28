/* Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Do this recursively.
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
xbxcd */
#include<bits/stdc++.h>
using namespace std;
int replace(string str, char target, char key)
{
    if(str.length() == 0)
    {
        return 0;
    }

    if (str[0] == target)
    {
        cout << key;
        replace(str.substr(1), 'a', 'x');
    }                   

    else
    {
        cout << str[0];
        replace(str.substr(1), 'a', 'x');
    }

}
int main()
{
   string str = "abacdeofefiaag,paga";
   replace(str, 'a', 'x');
   return 0;
}