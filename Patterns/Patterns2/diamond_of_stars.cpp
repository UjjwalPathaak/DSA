/* 
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  * 
  */
 #include <iostream> 
using namespace std;
int main() { 
    int n; cin >> n; 
    int currRow = 1; 
    while(currRow <= (n/2) + 1) 
    { 
        int spaces = 1; 
        while(spaces <= (n/2) + 1 - currRow) {
             cout << " "; spaces++; 
             } 
             int currCol = 1; 
             while(currCol <= (2 * currRow) - 1) 
             { 
                 cout << "*"; currCol++; 
                 } 
                 cout << endl; currRow++; 
                 } currRow = 1; 
                 while(currRow <= n / 2)
                 { int spaces = 1;
                  while(spaces <= currRow) 
                  { cout << " "; spaces++; }
                   int currCol = 2 * ((n/2) - currRow + 1) - 1; 
                   while(currCol >= 1) { cout << "*"; currCol--; } 
                   cout << endl; currRow++; } }
