/*Suppose you are building a simple drawing application. You have a base class
called Shape and two derived classes called Circle and Square. Each class
has a member function void draw()that should print the shape's name
followed by " is drawn." Create the necessary classes with appropriate
member functions and inheritance relationships. Then, write a program that
demonstrates the concept of runtime polymorphism by using an array of
pointers to Shape objects, where some pointers point to Circle objects and
some to Square objects. Use these pointers to call the draw() function for each object.*/

#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout << "Shape is drawn." << endl;
    }
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Circle is drawn." << endl;
    }
};
class Square : public Shape
{
public:
    void draw()
    {
        cout << "Square is drawn." << endl;
    }
};
int main()
{
    Circle c1;
    Square s1;
    Shape s0;
    cout << "After using the array of pointer to Shape object:" << endl;
    Shape *ar[] = {&s0, &c1, &s1};
    for (int i = 0; i < 3; i++)
    {
        ar[i]->draw();
    }
    return 0;
}