/*Write a C++ program that defines a class called "Rectangle" with private member variables "length" and "width".
The class should have the following member functions:
i. A default constructor that initializes both "length" and "width" to 0.
ii. A parameterized constructor that takes two arguments and initializes "length" and "width" accordingly.
iii. A function called "calculateArea" that calculates and returns the area of the rectangle.
iv. A function called "doubleSize" that takes a Rectangle object as an argument, doubles its length and width, and
returns the modified object. In the main function, create a Rectangle object using the parameterized constructor with
the values 4 and 5. Then, pass this object to the "doubleSize" function, and display the area of the modified rectangle.*/

#include <iostream>
using namespace std;
class rectangle
{
private:
    float length, width;

public:
    rectangle()
    {

        length = 0;
        width = 0;
    }
    rectangle(float l, float w)
    {

        length = l;
        width = w;
    }

    float calculateArea()
    {

        return length * width;
    }

    rectangle doubleSize(rectangle r1)
    {

        r1.length = 2 * r1.length;
        r1.width = 2 * r1.width;
        return r1;
    }
};
int main()
{

    rectangle r(4, 5), r2;
    r2 = r.doubleSize(r);
    cout << "The area of modified rectangle is:" << r2.calculateArea() << endl;
    return 0;
}