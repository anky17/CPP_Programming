/*You're tasked with building a drawing application that supports various shapes. To achieve this, you decide to use an abstract class called Shape
as the base class for different types of shapes. The Shape class has a pure virtual function double area() which needs to be implemented by each
derived class. Additionally, the Shape class should have a member function void printInfo() const that prints "This is a shape." Create the
necessary classes with appropriate member functions and inheritance relationships. Write the program to demonstrate the concept of abstract classes
by using an array of pointers to Shape objects, where some pointers point to specific shape objects such as Circle and Rectangle. Implement
the area() function in the derived classes and use these pointers to call the printInfo() and area() functions for each object.*/

#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double area() = 0;
    void printInfo() const
    {
        cout << "This is a shape." << endl;
    }
};
class Circle : public Shape
{
    int r;

public:
    Circle() { r = 2; };
    double area()
    {
        return 3.14 * r * r;
    }
};
class Rectangle : public Shape
{
    int l, b;

public:
    Rectangle()
    {
        l = 2;
        b = 4;
    };

    double area()
    {
        return l * b;
    }
};
int main()
{
    Rectangle r1;
    Circle c1;
    Shape *arr[2] = {&r1, &c1};
    for (int i = 0; i < 2; i++)
    {
        arr[i]->printInfo();
        cout << "Area=" << arr[i]->area() << endl;
    }
    return 0;
};
