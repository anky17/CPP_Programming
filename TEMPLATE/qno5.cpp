/*WAP TO FIND THE ROOTS OF QUADRATIC EQUATION USING FUNCTION TEMPLATE.*/

#include <iostream>
#include <math.h>
using namespace std;
template <class T>
void calculate(T a, T b, T c)
{
    T d = b * b - 4 * a * c;
    if (d > 0)
    {
        cout << "Root are real and distinct." << endl;
        float r1 = (-b + sqrt(d)) / (2 * a);
        float r2 = (-b - sqrt(d)) / (2 * a);
        cout << "R1=" << r1 << endl;
        cout << "R2=" << r2 << endl;
    }
    else if (d == 0)
    {
        cout << "Roots are equal." << endl;
        cout << "R1=R2=" << (-b / 2 * a);
    }
    else
    {
        cout << "Roots are imaginary." << endl;
    }
}
int main()
{
    int a1, b1, c1;
    float a2, b2, c2;
    cout << "Enter the integer coefficient:";
    cin >> a1 >> b1 >> c1;
    calculate(a1, b1, c1);
    cout << "Enter the float coefficient:";
    cin >> a2 >> b2 >> c2;
    calculate(a2, b2, c2);
    return 0;
}