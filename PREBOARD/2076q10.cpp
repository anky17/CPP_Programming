// WAP TO RETURN THE MAXIMUM OF FLOAT,INT AND CHAR USING FUNCTION TEMPLATE.

#include <iostream>
using namespace std;
template <class T>
T maximum(T x, T y)
{
    T result;
    if (x > y)
    {
        result = x;
    }
    else
    {
        result = y;
    }
    return result;
}
int main()
{
    int a = 2, b = 4;
    float f1 = 2.2, f2 = 1.1;
    char c1 = 'a', c2 = 'c';
    cout << "For intergers the maximum is:" << maximum(a, b) << endl;
    cout << "For float the maximum is:" << maximum(f1, f2) << endl;
    cout << "For char the maximum is:" << maximum(c1, c2) << endl;
}