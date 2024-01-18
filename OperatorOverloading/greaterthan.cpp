#include <iostream>
using namespace std;
class Max
{
private:
    int x;

public:
    Max(int a)
    {
        x = a;
    }
    int operator>(Max m2)
    {
        if (x > m2.x)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void display()
    {
        cout << "Maximum value=" << x << endl;
    }
};
int main()
{
    Max m1(55), m2(51);
    if (m1 > m2)
    {
        m1.display();
    }
    else
    {
        m2.display();
    }
    return 0;
}