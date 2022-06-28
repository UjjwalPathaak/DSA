/* Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")

Output format :
Corresponding integer N (int, Eg. 1234)

Constraints :
0 <= |S| <= 9
where |S| represents length of string S.

Sample Input 1 :
1231

Sample Output 1 :
1231

Sample Input 2 :
12567

Sample Output 2 :
12567
 */
#include<bits/stdc++.h>
using namespace std;
int string_to_integer(string str)
{
    cout << str << endl;
    if(str.length() == 1)
    {
        return str[0];
    }
  /*   cout << str[0] << endl;
    cout << pow(10, str.length() - 1) << endl; */
    int ans = string_to_integer(str.substr(1));
    cout << ans << endl;
    return str[0]*pow(10, str.length() - 1);
}

int main()
{
   string str = "1231";
  cout << string_to_integer(str);
   return 0;
}