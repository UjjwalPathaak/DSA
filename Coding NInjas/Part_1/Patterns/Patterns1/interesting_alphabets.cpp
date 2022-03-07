/* 
Code : Interesting Alphabets
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format :
N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 26
Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH */
#include <iostream>
using namespace std;
int main(){
    int N, i;
    cin >> N;
    i = 1;
    while(i<=N){
        int j = 1;
        char st = 'A' + N - i;
        while(j<=i){
            cout << st;
            st++;
            j++;
        }
        cout<<endl;
        i++;    
    }
    
    return 0;
}
