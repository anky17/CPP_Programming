#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    space()
    {
    }
    space(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
    friend space operator-(space &s);
};
space operator-(space &t)
{
    space s;
    s.x = -t.x;
    s.y = -t.y;
    s.z = -t.z;
    return s;
}
int main()
{
    space t1, t2;
    t1 = space(2, 3, 4);
    t2 = -t1;
    t2.display();
}