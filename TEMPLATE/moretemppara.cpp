// We can add extra template parameter in the derived class along with the base
// class template parameter.
#include <iostream>
using namespace std;
template <class T>
class Base
{

private:
    T a;

public:
    Base(T x)
    {
        a = x;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
template <class T, class T1>
class Derived : public Base<T>
{
private:
    T1 b;

public:
    Derived(T x, T1 y) : Base<T>(x)
    {
        b = y;
    }
    void display()
    {
        Base<T>::display();
        cout << "b=" << b << endl;
    }
};
int main()
{
    Derived<int, double> d(2, 4.3);
    d.display();
}