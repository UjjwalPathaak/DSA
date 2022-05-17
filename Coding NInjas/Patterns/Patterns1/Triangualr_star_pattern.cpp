/* 
*
**
***
**** 
*/
#include<iostream>
using namespace std;

int main(){
    int N, i;
    cin >> N;
    i = 1;
    while(i<=N){
        int j = 1;
        while(j <= i){
            cout << '*';
            j++;
        }
        cout<< endl;
        i++;}
    return 0;
}




