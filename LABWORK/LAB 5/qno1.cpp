/*Create a class PositiveInteger that represents a positive integer. Implement an overloaded unary operator - to
perform negation on a positive integer and return its negated value. The PositiveInteger class should ensure that
the value remains positive at all times, even after negation. Use friend function to overload unary operator -.*/
#include <iostream>
using namespace std;
class PositiveInteger
{
private:
    int value;

public:
    PositiveInteger(int val)
    {
        value = val;
    }
    int getvalue()
    {
        return value;
    }
    int operator-()
    {
        return (-value);
    }
};
int main()
{
    PositiveInteger num1(5);
    PositiveInteger num2 = -num1;
    cout << "Before using unary operator:" << endl;
    cout << "Number=" << num1.getvalue() << endl;
    cout << "After using unary operator:" << endl;
    cout << "Number=" << num2.getvalue() << endl;
    cout << "Without using unary operator:" << endl;
    cout << "Number=" << num1.getvalue() << endl;
}