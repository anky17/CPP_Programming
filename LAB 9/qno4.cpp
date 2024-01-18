/*Create a Scientific Calculator program using two classes, Calculator and MathOperations, where MathOperations is a Friend class of Calculator.
The Calculator class has private data members for two input values and public member functions for initialization and data retrieval. The
MathOperations class contains static member functions for addition, subtraction, multiplication, and division operations, and it can access the
private data members of the Calculator class. Implement the classes in C++ and demonstrate the scientific calculator's functionality with
appropriate test cases.*/
#include <iostream>
using namespace std;
class Calculator; // Forward declaration
class MathOperations
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }
    static int subtract(int a, int b)
    {
        return a - b;
    }
    static int multiply(int a, int b)
    {
        return a * b;
    }
    static int divide(int a, int b)
    {
        if (b == 0)
        {
            return 0;
        }
        return a / b;
    }
    friend class Calculator; // Friend class declaration
};
class Calculator
{
private:
    int num1;
    int num2;

public:
    void initialize()
    {
        cout << "Enter any two integer number:";
        cin >> num1 >> num2;
    }
    int add()
    {
        return MathOperations::add(num1, num2);
    }
    int subtract()
    {
        return MathOperations::subtract(num1, num2);
    }
    int multiply()
    {
        return MathOperations::multiply(num1, num2);
    }
    int divide()
    {
        return MathOperations::divide(num1, num2);
    }
};
int main()
{
    Calculator cal;
    cal.initialize();
    cout << "Addition: " << cal.add() << endl;
    cout << "Subtraction: " << cal.subtract() << endl;
    cout << "Multiplication: " << cal.multiply() << endl;
    if (cal.divide() == 0)
    {
        cout << "Error! Divide by zero.";
    }
    else
        cout << "Division: " << cal.divide() << endl;
    return 0;
}