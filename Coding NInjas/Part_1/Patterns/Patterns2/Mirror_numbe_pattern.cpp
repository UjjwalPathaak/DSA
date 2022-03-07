/* 
Code : Mirror Number Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4

 . . . 1
 . . 1 2
 . 1 2 3
 1 2 3 4

The dots represent spaces.


Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 50
Sample Input 1:
3
Sample Output 1:
. . 1 
. 1 2
1 2 3
Sample Input 2:
4
Sample Output 2:
. . . 1 
. . 1 2
. 1 2 3
1 2 3 4 */
#include<iostream>
using namespace std;


int main(){
    int N, i;
    cin >> N;
    i = 1;
    while(i<=N){
        int spaces = 1;
        while(spaces <= N - i){
            cout << ' ';
            spaces++;
        }
        int j = 1;
        while(j<=i){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
return 0;
}