// WAP TO CONVERT RECTANGLE TO POLAR.

#include <iostream>
#include <cmath>
using namespace std;
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
    rectangle(float xco, float yco)
    {
        this->xco = xco;
        this->yco = yco;
    }
    void display()
    {
        cout << "(" << xco << "," << yco << ")" << endl;
    }
    operator polar()
   {
        float radius = sqrt(xco * xco + yco * yco);
        float angle = tan(yco / xco);
        return polar(radius, angle);
    }
};
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
    polar(float radius, float angle)
    {
        this->radius = radius;
        this->angle = angle;
    }
    void display()
    {
        cout << "(" << radius << "," << angle << ")" << endl;
    }
};

    
int main()
{
    rectangle r(7.26212, 6.8747);
    polar p;
    p = r;
    cout << "The  rectangle coordinates is:" << endl;
    r.display();
    cout << "The equivalent polar coordinates is:" << endl;
    p.display();
}
