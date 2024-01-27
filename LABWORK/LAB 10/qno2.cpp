/*Write a class student with roll, name, address, marks as member variables and member functions to read and display the information of the
students. Write records of 10 students in a binary file and also read the records of the student from the binary file. Also search a specific
record of the student using roll number as a key from the user input.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student
{
private:
    int roll;
    string address;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your roll number:";
        cin >> roll;
        cout << "Enter your address:";
        cin >> address;
        cout << "Enter your marks:";
        cin >> marks;
    }
    void display()
    {
        cout << "Name of the student:" << name << endl;
        cout << "Address of the student:" << address << endl;
        cout << "Roll number of the student:" << roll << endl;
        cout << "Marks of the student:" << marks << endl;
    }
    int check(int r)
    {
        if (r == roll)
        {
            return 1;
        }
        else
            return 0;
    }
};
void add_records()
{
    int i;
    student s[10];
    fstream f_out;
    f_out.open("records.txt", ios::out | ios::app | ios::binary);
    for (i = 0; i < 2; i++)
    {
        s[i].input();
        f_out.write((char(*)) & s[i], sizeof(s[i]));
    }
    f_out.close();
}
void read_records()
{
    student s;
    fstream fin;
    fin.open("records.txt", ios::in | ios::binary);
    while (fin.read((char(*)) & s, sizeof(s)))
    {
        s.display();
    }
    fin.close();
}
void search_specific()
{
    int roll, flag;
    student s;
    cout << "Enter the roll number to be searched:";
    cin >> roll;
    fstream fin;
    fin.open("records.txt", ios::in | ios::binary);
    while (fin.read((char(*)) & s, sizeof(s)))
    {
        if (s.check(roll))
        {
            s.display();
            flag = 1;
            break;
        }
        else
        {
            cout << "Record not found." << endl;
        }
    }
}

int main()
{
    add_records();
    search_specific();
    return 0;
}