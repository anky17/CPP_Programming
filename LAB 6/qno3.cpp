/* You are provided with a LengthInMeters class that represents length in
meters. The class has one private member variable meters, which is of type
double. Your task is to implement a constructor that allows conversion
from LengthInMeters to LengthInFeetAndInches. Your task is to
implement a LengthInFeetAndInches class that represents length in feet
and inches and includes a constructor to allow conversion from
LengthInMeters to LengthInFeetAndInches.*/

///////one argument parameterized constructor//////

#include <iostream>
using namespace std;
class LengthInMeter
{
private:
    double meter;

public:
    LengthInMeter(double m)
    {
        meter = m;
    }
    void display()
    {
        cout << "Meter=" << meter << endl;
    }
    double ret_mem()
    {
        return meter;
    }
};
class LengthInFeetAndInches
{
private:
    int feet;
    int inches;

public:
    LengthInFeetAndInches()
    {
        feet = 0;
        inches = 0;
    }
    LengthInFeetAndInches(LengthInMeter a)
    {
        int inch = a.ret_mem() / 0.0254;
        feet = inch / 12;
        inches = inch % 12;
    }
    void display()
    {
        cout << feet << " feet " << inches << " inch " << endl;
    }
};
int main()
{
    LengthInMeter m1(24);
    LengthInFeetAndInches f1;
    f1 = m1;
    cout << "The Given Measurement in Meter is:" << endl;
    m1.display();
    cout << "The Approximate conversion of meter into feet and inches is:" << endl;
    f1.display();
    return 0;
}