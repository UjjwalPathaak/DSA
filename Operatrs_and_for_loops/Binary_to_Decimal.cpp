#include<iostream>
#include <cmath>
using namespace std;

int main() {
           int num, des = 0, lastdigit, b = 0;
           cin >> num;

            while(num > 0)
            {
                lastdigit = num%10;

                des = des + lastdigit * pow(2, b);
                b++;
                     num = num / 10;

            }
            cout << des;
            return 0;
}
