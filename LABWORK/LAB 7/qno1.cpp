// WAP to implement public, private and protected inheritance.
#include <iostream>
using namespace std;
class A
{
private:
    int x;

protected:
    int y;

public:
    int z;
    void get_xyz()
    {
        cout << "Enter the value of x,y and z:";
        cin >> x >> y >> z;
    }
    void show_xyz()
    {
        cout << "x=" << x << " y=" << y << " z=" << z << endl;
    }
};

class B : public A
{
private:
    int k, sum;

public:
    void get_k()
    {

        cout << "Enter the value of k:";
        cin >> k;
    }
    void show_k()
    {
        cout << "k=" << k << endl;
    }
    void add()
    {
        sum = y + z + k;
    }
    void display_sum()
    {
        cout << "sum=" << sum << endl;
    }
};
class C : private A
{
private:
    int k, sum;

public:
    void get_k()
    {
        A::get_xyz();
        cout << "Enter the value of k:";
        cin >> k;
    }
    void show_k()
    {
        A::show_xyz();
        cout << "k=" << k << endl;
    }
    void add()
    {
        sum = y + z + k;
    }
    void display_sum()
    {
        cout << "sum=" << sum << endl;
    }
};
class D : protected A
{
private:
    int k, sum;

public:
    void get_k()
    {

        A::get_xyz();
        cout << "Enter the value of k:";
        cin >> k;
    }
    void show_k()
    {
        A::show_xyz();
        cout << "k=" << k << endl;
    }
    void add()
    {
        sum = y + z + k;
    }
    void display_sum()
    {
        cout << "sum=" << sum << endl;
    }
};
int main()
{
    B b1;
    cout << "After using Public Inheritance:" << endl;
    b1.get_xyz();
    b1.get_k();
    b1.show_xyz();
    b1.show_k();
    b1.add();
    b1.display_sum();
    C c1;
    cout << "After using Private Inheritance:" << endl;
    c1.get_k();
    c1.show_k();
    c1.add();
    c1.display_sum();
    D d1;
    cout << "After using Protected Inheritance:" << endl;
    d1.get_k();
    d1.show_k();
    d1.add();
    d1.display_sum();
}