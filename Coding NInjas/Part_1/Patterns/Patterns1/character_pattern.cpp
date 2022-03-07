/* 
Pattern for N = 4
A
BC
CDE
DEFG
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 13
Sample Input 1:
5
Sample Output 1:
A
BC
CDE
DEFG
EFGHI
Sample Input 2:
6
Sample Output 2:
A
BC
CDE
DEFG
EFGHI
FGHIJK */
#include<iostream>
using namespace std;

int main(){
    int i, N;
    cin >> N;
    i = 1;
    while(i<=N){
        //char a = 'A';
        //char s = 'A' + j - 1;
        int j = 1;
        //char sc = 'A' + i - 1;
       // char ch = sc + j - 1;
        while(j <= i){
            char sc = 'A' + i - 1;
        char ch = sc + j - 1;
           cout << ch;
           j = j + 1; 
        }
    cout << endl;
    i = i + 1;
    }
    return 0;
}