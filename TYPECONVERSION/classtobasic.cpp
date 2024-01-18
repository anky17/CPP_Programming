// WAP TO CONVERT FEET AND INCH INTO METER.

#include <iostream>
using namespace std;

class dist
{

private:
    int feet;
    int inch;

public:
    dist()
    {
        feet = 0;
        inch = 0;
    }
    dist(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void display()
    {
        cout << feet << " feet " << inch << " inch " << endl;
    }

    operator int()
    {
        float f = inch / 12;
        feet = feet + f;
        return (feet / 3.2);
    }
};

int main()
{
    dist d(44, 9);
    d.display();
    float meter = d;
    cout << "The equivalent meter is:";
    cout << meter;
    return 0;
}