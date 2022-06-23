/* 
Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654 */
     #include<iostream>
using namespace std;


int main(){
    int n, i;
    cin >> n;
    i = 1;
     while(i <= n) { 
         int sp;
         sp = 1;
         while(sp <= n - i){
            cout << ' ';
            sp++;
         }
         int j = 1;
         int a= 1;
         while(j <= i*2 - 1 ){
            cout << '*';
            j  = j + 1;}
            //a = a + 2;         
         cout << endl;
         i++;
     }

    
return 0;}


