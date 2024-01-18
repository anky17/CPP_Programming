/*DIVIDE BY ZERO.*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, x;
    cout << "Enter the value of a and b:";
    cin >> a >> b;
    x = a - b;
    try
    {
        if (x != 0)
        {
            cout << "Result(a/x)=" << a / x << endl;
        }
        else
        {
            throw(x);
        }
    }
    catch (int i)
    {
        cout << "Exception caught:Divide by Zero" << endl;
    }
    cout << "END";
    return 0;
}