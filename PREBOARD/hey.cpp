#include <iostream>
using namespace std;
int &largest(int &a, int &b)
{

    return a > b ? a : b;
}
int main()
{
    int a = 4, b = 5;
    largest(a, b) = -1;
    cout << "After calling a=" << a << " b=" << b;
    return 0;
}