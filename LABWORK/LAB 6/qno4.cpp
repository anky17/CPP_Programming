/* You are provided with a LengthInMeters class that represents length in meters. The class has one private member variable meters, which is of
type double. Your task is to implement a casting operator function that allows conversion from LengthInMeters to LengthInFeetAndInches.*/
#include <iostream>
using namespace std;
class LengthInFeetAndInches
{
private:
    int feet;
    int inch;

public:
    LengthInFeetAndInches()
    {
        feet = 0;
        inch = 0;
    }
    LengthInFeetAndInches(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void display()
    {
        cout << feet << " feet " << inch << " inches " << endl;
    }
};
class LengthInMeters
{
private:
    double meter;

public:
    LengthInMeters()
    {
        meter = 0;
    }
    LengthInMeters(double m)
    {
        meter = m;
    }
    void display()
    {
        cout << "Meter=" << meter << endl;
    }
    operator LengthInFeetAndInches()
    {
        int i = meter / 0.0254;
        int x = i / 12;
        int y = i % 12;
        return LengthInFeetAndInches(x, y);
    }
};
int main()
{
    LengthInMeters m1(24);
    LengthInFeetAndInches f1;
    f1 = m1;
    cout << "Before conversion:" << endl;
    m1.display();
    cout << "Approximate Conversion is:" << endl;
    f1.display();
    return 0;
}
