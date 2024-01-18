// WAP TO CONVERT METER TO FEET AND INCH.

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
    dist(int meter)
    {
        float m = 3.2 * meter;
        feet = int(m);
        inch = (m - feet) * 12;
    }
    void display()
    {
        cout << feet << " feet " << inch << " inch " << endl;
    }
};
int main()
{
    dist d;
    int meter;
    cout << "Enter the meter to be converted into feet and inch:";
    cin >> meter;
    d = meter;
    cout << "The meter equivalent to feet and inch is:" << endl;
    d.display();
    return 0;
}