/* Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S

Output format :
Modified String

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S.

Sample Input 1 :
xaxb

Sample Output 1:
ab

Sample Input 2 :
abc

Sample Output 2:
abc

Sample Input 3 :
xx

Sample Output 3:

 */
#include<bits/stdc++.h>
using namespace std;
void change(string input)
{
    if(input.length() == 0)
    {
        return ;
    }

    if (input[0] == 'x')
    {
        change(input.substr(1));
    }
    else
   { cout << input[0];
    change(input.substr(1));}
    
}
int main()
{
   string str = "xaxbxxabosfononxxoenofxlxkxk";
   change(str);
   return 0;
}