#include <iostream>
using namespace std;

int main()
{
	long int N, q, rem, r, binary, ans, power;
	cin >> N;
   power = 1;
   
	while(N > 0)
	{

	    q = N / 2;
	    rem = N % 2;
        N = q;
        binary = rem*power + binary;
        power = power * 10;

    }
cout << binary;
}