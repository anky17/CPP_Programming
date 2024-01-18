// BASE CLASS TEMPLATE AND NON TEMPLATE DERIVED CLASS
#include <iostream>
using namespace std;
template <class T>
class Base
{
private:
    T a;

public:
    Base()
    {
        a = 0;
    }
    Base(T x)
    {
        a = x;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
class Derived : public Base<int>
{
private:
    int b;

public:
    Derived(int y, int z) : Base<int>(y)
    {
        b = z;
    }
    void display()
    {
        Base<int>::display();
        cout << "b=" << b << endl;
    }
};
int main()
{
    Derived d(2, 8);
    d.display();
}