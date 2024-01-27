/*
3. WAP to write records of students in a file and display the records of the
students according to the descending order of marks obtained by them.
*/

#include <iostream>
#include <fstream>
using namespace std;
class student
{
    char name[30];
    int roll;
    float marks;

public:
    void input()
    {
        cout << "Enter the name of an student:" << endl;
        cin >> name;
        cout << "Enter the roll of the student:" << endl;
        cin >> roll;
        cout << "Enter the marks obtained:" << endl;
        cin >> marks;
    }
    void display()
    {
        cout << "Name of the student=" << name << endl;
        cout << "Roll of the student=" << roll << endl;
        cout << "Marks obtained=" << marks << endl;
    }
    float ret_marks()
    {
        return marks;
    }
};

void add_records()
{
    student s[5];
    fstream fout;
    fout.open("Student.txt", ios::out | ios::app | ios::binary);
    for (int i = 0; i < 5; i++)
    {
        s[i].input();
        fout.write((char *)&s[i], sizeof(s[i]));
    }
    fout.close();
}
void display_records()
{
    student s[5];
    fstream fin;
    fin.open("Student.txt", ios::in | ios::binary);
    for (int i = 0; i < 5; i++)
    {
        fin.read((char *)&s[i], sizeof(s[i]));
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {

            if (s[j].ret_marks() > s[i].ret_marks())
            {
                student temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            s[i].display();
        }
        fin.close();
    }
}
int main()
{
    int choice;
    while (1)
    {
        cout << "1.Add records to the file:" << endl;
        cout << "2.Display records from the file:" << endl;
        cout << "3.Exit" << endl;
        cout << "Enter the choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            add_records();
            break;

        case 2:
            display_records();
            break;

        case 3:
            exit(0);
        default:
            cout << "Wrong Choice" << endl;
        }
    }
    return 0;
}