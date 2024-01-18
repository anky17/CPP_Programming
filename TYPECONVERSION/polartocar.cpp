// WAP TO CONVERT FROM POLAR TO RECTANGLE USING CONVERSION ROUTINE IN POLAR i.e source.

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
    polar(float r, float a)
    {
        radius = r;
        angle = a;
    }
    void display()
    {
        cout << "(" << radius << "," << angle << ")" << endl;
    }
    operator rectangle()
    {
        float xco = radius * cos(angle);
        float yco = radius * sin(angle);
        return rectangle(xco, yco);
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
