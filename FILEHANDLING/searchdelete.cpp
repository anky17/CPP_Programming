#include <iostream>
#include <fstream>
using namespace std;

class student
{
private:
    int roll;
    string name;
    float marks;

public:
    void read()
    {
        cout << "Enter the name, roll number and marks of student: " << endl;
        cin >> name;
        cin >> roll;
        cin >> marks;
    }
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Roll number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
    int check()
    {
        return roll;
    }
};
int main()
{
    fstream fout;
    fout.open("delete.dat", ios::out | ios::binary | ios::trunc);
    student s[4];
    for (int i = 0; i < 4; i++)
    {
        s[i].read();
        fout.write((char *)&s, sizeof(student));
    }
    fout.close();

    fstream fin, fout1;
    fout1.open("temp.dat",  ios::out | ios::binary | ios::trunc);
    fin.open("delete.dat", ios::in | ios::binary);
    int data;
    cout << "Enter the roll number of student to be deleted: ";
    cin >> data;
    student a;
    while (fin.read((char *)&s, sizeof(student)))
    {
        if (!data == s->check())
        {
            fout1.write((char *)&a, sizeof(student));
        }
    }
    remove("delete.dat");
    rename("temp.dat", "delete.dat");
    cout << "Record deleted successfully." << endl;
    fin.close();
    fout1.close();

    fstream fout2;
    fout2.open("delete.dat", ios::in | ios::binary);
    while (fout2.read((char *)&a, sizeof(student)))
    {
        a.display();
    }
    fout1.close();
}