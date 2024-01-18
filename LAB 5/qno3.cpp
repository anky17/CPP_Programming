/*You are given a Rational class that represents rational numbers (fractions). The class has two private member
variables: numerator (to store the numerator) and denominator (to store the denominator) of the rational number.
Your task is to overload the binary operators +, -, *, and / for this class to perform arithmetic operations with
rational numbers. Make sure to simplify the rational numbers after performing arithmetic operations to represent them
in their simplest form (i.e., with the smallest possible integer numerator and denominator). You may assume that the input
rational numbers will have valid values, and the denominator will never be zero.*/
#include <iostream>
using namespace std;
class Rational
{
private:
    int numerator, denominator;

public:
    int hcf(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        return hcf(b, a % b);
    }
    Rational() {}  
    Rational(int num, int den)
    {
        int h = hcf(num, den);
        numerator = num / h;
        denominator = den / h;
    }
    Rational operator+(Rational &obj)
    {
        int new_numerator = (numerator * obj.denominator) + (obj.numerator * denominator);
        int new_denominator = denominator * obj.denominator;
        return Rational(new_numerator, new_denominator);
    }
    Rational operator-(Rational &obj)
    {
        int new_numerator = (numerator * obj.denominator) - (obj.numerator * denominator);
        int new_denominator = denominator * obj.denominator;
        return Rational(new_numerator, new_denominator);
    }
    Rational operator*(Rational &obj)
    {
        int new_numerator = numerator * obj.numerator;
        int new_denominator = denominator * obj.denominator;
        return Rational(new_numerator, new_denominator);
    }
    Rational operator/(Rational &obj)
    {
        int new_numerator = numerator * obj.denominator;
        int new_denominator = denominator * obj.numerator;
        return Rational(new_numerator, new_denominator);
    }
    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }
};
int main()
{
    Rational r1(12, 9);
    Rational r2(2, 3);
    Rational sum, diff, mul, div;
    sum = r1 + r2;
    cout << "Rational number after addition:" << endl;
    sum.print();
    diff = r1 - r2;
    cout << "Rational number after difference:" << endl;
    diff.print();
    mul = r1 * r2;
    cout << "Rational number after multiplication:" << endl;
    mul.print();
    div = r1 / r2;
    cout << "Rational number after division:" << endl;
    div.print();
}