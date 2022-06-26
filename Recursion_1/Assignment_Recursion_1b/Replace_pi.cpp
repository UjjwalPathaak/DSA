/* Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Sample Input 1 :
xpix

Sample Output :
x3.14x

Sample Input 2 :
pipi

Sample Output :
3.143.14

Sample Input 3 :
pip

Sample Output :
3.14p */
#include<bits/stdc++.h>
using namespace std;
void change(string input){
    if(input.length() == 0)
    {
        return;
    }

    if(input[0] == 'p' && input[0 + 1] == 'i')
    {
        cout << "3.14";
        change(input.substr(2));
    }
    else
    cout << input[0];/*  */
    change(input.substr(1));
    return;

    
    
}
int main()
{
    string input = "pip";
    change(input);
    cout << input;
 return 0;
}