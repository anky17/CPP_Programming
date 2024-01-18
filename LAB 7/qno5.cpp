/*Develop a C++ program to exemplify multipath inheritance within a software development context. The scenario involves four classes:
Employee, Programmer, Manager, and TeamMember.
Employee Class:
➢ Base class Employee with a protected attribute employeeID and method displayEmployeeInfo() shows the employee's ID.
Programmer Class:
➢ Derived from Employee, introduces programmingLanguage attribute and method displayLanguage() displays the programming language.
Manager Class:
➢ Derived from Employee, introduces department attribute and method displayDepartment() shows the managed department.
TeamMember Class:
➢ Derived from both Programmer and Manager, inheriting attributes and method displayTeamInfo() calls methods from base classes.
Design a program that:
a. Creates a TeamMember instance, configures attributes and demonstrates ambiguity arising from multipath inheritance in method calls.
b. Resolves ambiguity using scope resolution to access specific base class methods and explain how multipath inheritance ambiguity is tackled with
scope resolution.*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int employeeID;

public:
    Employee(int ID) : employeeID(ID) {}
    void displayEmployeeInfo()
    {
        cout << "Employee ID:" << employeeID << endl;
    }
};

class Programmer : public Employee
{
protected:
    string programmingLanguage;

public:
    Programmer(int ID, string language) : Employee(ID), programmingLanguage(language) {}
    void displayLanguage()
    {
        cout << "Programming Language:" << programmingLanguage << endl;
    }
};

class Manager : public Employee
{
protected:
    string department;

public:
    Manager(int ID, string Department) : Employee(ID), department(Department) {}
    void displayDepartment()
    {
        cout << "Department:" << department << endl;
    }
};

class TeamMember : public Programmer, public Manager
{
public:
    TeamMember(int id, string Language, string Department) : Programmer(id, Language), Manager(id, Department) {}
    void displayTeamInfo()
    {
        Manager::displayEmployeeInfo();
        Programmer::displayLanguage();
        Manager::displayDepartment();
    }
};
int main()
{
    TeamMember t1(56, "C++", "Software Development");
    cout << "Team member info:" << endl;
    t1.displayTeamInfo();
    return 0;
};