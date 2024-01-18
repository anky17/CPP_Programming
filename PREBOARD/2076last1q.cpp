#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int sid;
    string sname;
    string level;

    void read_data()
    {
        cout << "Enter Student ID: ";
        cin >> sid;

        cout << "Enter Student Name: ";
        cin >> sname;

        cout << "Enter Student Level: ";
        cin >> level;
    }

    void print_data()
    {
        cout << "\nStudent ID: " << sid << endl;
        cout << "Student Name: " << sname << endl;
        cout << "Student Level: " << level << endl;
    }
};

int main()
{
    Student s1;
    s1.read_data();
    s1.print_data();
    return 0;
}