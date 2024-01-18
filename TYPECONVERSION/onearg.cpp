// WAP TO CONVERT POLAR TO RECTANGLE USING ONE ARGUMENT PARAMETERIZED CONSTRUCTOR.

#include <iostream>
#include <cmath>
using namespace std;
class polar
{
private:
    float radius;
    float angle;

public:
    polar()
    {
        radius = 0.0;
        angle = 0.0;
    }
    polar(float r, float a)
    {
        radius = r;
        angle = a;
    }
    void display()
    {
        cout << "(" << radius << "," << angle << ")" << endl;
    }
    float ret_angle()
    {
        return angle;
    }
    float ret_radius()
    {
        return radius;
    }
};
class rectangle
{
private:
    float xco;
    float yco;

public:
    rectangle()
    {
        xco = 0.0;
        yco = 0.0;
    }
    rectangle(polar p)
    {
        xco = p.ret_radius() * cos(p.ret_angle());
        yco = p.ret_radius() * sin(p.ret_angle());
    }
    void display()
    {
        cout << "(" << xco << "," << yco << ")" << endl;
    }
};
int main()
{
    polar p(10.0, 0.758);
    rectangle r;
    r = p;
    cout << "The polar coordinates is:" << endl;
    p.display();
    cout << "The equivalent rectangle coordinates is:" << endl;
    r.display();
}
