/*Write a program to access the overridden data members and member functions of question number 2 by the help of a member function of a derived
class and also by the help of a derived class object.*/

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
        Person::displayInfo();
        cout << "Department:" << department << endl;
    }
    void get_info()
    {
        Person::get_info();
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
        Person::
            get_info();
        cout << "Enter the position:";
        cin >> position;
    }
    void displayInfo()
    {
        Person::
            displayInfo();
        cout << "Position:" << position << endl;
    }
};
int main()
{
    Faculty f1;
    Staff s1;
    cout << "After using the member function of derived object:" << endl;
    cout << "Enter the information of faculty:" << endl;
    f1.get_info();
    cout << endl
         << "The Information of Faculty Class is:" << endl;
    f1.displayInfo();

    cout << "Enter the information of staff:" << endl;
    s1.get_info();
    cout << endl
         << "The Information of Staff Class is:" << endl;
    s1.displayInfo();

    cout << endl
         << "After using derived class object:" << endl;
    f1.Person::get_info();
    s1.Person::displayInfo();

    return 0;
}
