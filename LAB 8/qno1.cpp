/*Suppose you have a base class called Shape and a derived class called Circle. The Shape class has a member function void printInfo() that
prints "This is a shape." and the Circle class has an additional member function void printRadius() that prints the radius of the circle.
The Circle class inherits publicly from the Shape class. Write a program that demonstrates the use of pointers to the base class
and the derived class. Create an array of pointers to Shape objects, where some pointers point to Shape objects
and some to Circle objects. Use these pointers to call the printInfo() function for each object and also call the printRadius()
function for the objects that are Circle instances.*/

#include <iostream>
using namespace std;
class Shape
{
public:
    void printInfo()
    {
        cout << "This is a shape." << endl;
    }
};
class Circle : public Shape
{
    int radius;

public:
    Circle()
    {
        radius = 4;
    }
    void printInfo()
    {
        cout << "This is a circle." << endl;
    }
    void printRadius()
    {
        cout << "The radius of this circle is " << radius << endl;
    }
};
int main()
{
    Shape *s1[3], s2;
    Circle c1, c2, *c3;
    s1[0] = &s2;
    s1[1] = &c2;
    s1[2] = &c1;
    c3 = &c1;
    s1[0]->printInfo();W
    s1[1]->printInfo();
    (*c3).printRadius();
    c3->printInfo();
    return 0;
}