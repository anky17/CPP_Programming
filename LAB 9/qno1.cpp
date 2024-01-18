/*Create a C++ class called Fraction that represents a fraction with private member variables numerator and denominator. Implement a non-member
function called multiply() that takes two Fraction objects as parameters and returns the result of multiplying the fractions together as a new
Fraction object. Make the multiply() function a friend of the Fraction class using the friend keyword. Demonstrate the usage of the multiply()
function in a program.*/
#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator, denominator;

public:
    Fraction() {}
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}
    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
    friend Fraction multiply(Fraction &, Fraction &);
};
Fraction multiply(Fraction &f1, Fraction &f2)
{
    return Fraction(f1.numerator * f2.numerator, f1.denominator * f2.denominator);
}
int main()
{
    Fraction f1(3, 4);
    Fraction f2(4, 6);
    Fraction f3 = multiply(f1, f2);
    cout << "After multiplication:" << endl;
    f3.display();
    return 0;
}