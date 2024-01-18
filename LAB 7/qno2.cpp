/*Create a C++ program involving classes Person, Faculty, and Staff. The base
class Person contains protected attributes name and age. The derived Faculty
class adds a protected attribute department and overrides displayInfo() to
include name, age, and department. Similarly, the derived Staff class adds a
protected attribute position and overrides displayInfo() with name, age, and
position.Write a program that creates instances of Faculty and Staff,sets their
attributes and calls displayInfo() for both instances. Observe data member
and member function overriding during compilation and execution.*/

#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    void get_info()
    {
        cout << "Enter the name:";
        cin >> name;
        cout << "Enter the age:";
        cin >> age;
    }
    void displayInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
};
class Faculty : public Person
{
protected:
    string department;

public:
    void displayInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Department:" << department << endl;
    }
    void take_info()
    {
        cout << "Enter the department:";
        cin >> department;
    }
};
class Staff : public Person
{
protected:
    string position;

public:
    void get_info()
    {
        cout << "Enter the position:";
        cin >> position;
    }
    void displayInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Position:" << position << endl;
    }
};
int main()
{
    Faculty f1;
    Staff s1;
    cout << "The Information of Faculty Class is:" << endl;
    f1.take_info();
    f1.displayInfo();
    cout << endl
         << "The Information of Staff Class is:" << endl;
    s1.get_info();
    s1.displayInfo();
    return 0;
}