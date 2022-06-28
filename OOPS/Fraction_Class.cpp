#include <bits/stdc++.h>
using namespace std;

class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }

    void add(fraction f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;

        int num = x * this->numerator + (y * f2.numerator);

        this->numerator = num;
        this->denominator = lcm;
    }
};

int main()
{
    fraction f1(10, 2);
    fraction f2(20, 5);

    f1.print();
    f2.print();

    f1.add(f2);
    f1.print();
    return 0;
}