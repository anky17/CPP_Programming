/*You are provided with a Height class that represents a person's height in the feet-inch system. The class has two private member variables:
feet (to store the height in feet) and inches (to store the height in inches). Your task is to implement a constructor that allows conversion
from int (representing height in inches) to Height.
*/
#include <iostream>
using namespace std;
class Height
{
private:
    int feet;
    int inch;

public:
    Height()
    {
        feet = 0;
        inch = 0;
    }
    Height(int inches)
    {
        feet = inches / 12;
        inch = inches % 12;
    }
    void display()
    {
        cout << feet << " feet " << inch << " inch " << endl;
    }
};
int main()
{
    Height h1;
    int inch = 13;
    cout << "After Conversion:" << endl;
    h1 = inch;
    h1.display();
    return 0;
}