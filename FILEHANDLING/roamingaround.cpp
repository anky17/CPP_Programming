/*Write a class student with roll, name, address, as member variables and
member functions to read and display the information of the students. Write
records of 4 students in a binary file and also read the records of the student
from the binary file. Also search a specific record of the student using roll
number as a key from the user input.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class student
{
    string name;
    int roll;
    string address;

public:
    void read()
    {
        cout << "\nEnter the name of student:";
        cin >> name;
        cout << "Enter the roll number of the student:";
        cin >> roll;
        cout << "Enter the address of the student:";
        cin >> address;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Roll number: " << roll << endl;
    }
    int search(int r)
    {
        if (r == roll)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

void add_records()
{
    fstream fout;
    fout.open("student.txt", ios::binary | ios::out | ios::app);
    student s[5];
    for (int i = 0; i < 4; i++)
    {
        s[i].read();
        fout.write((char *)&s[i], sizeof(s));
    }
    fout.close();
}

void read_records()
{
    fstream fin;
    student s;
    fin.open("student.txt", ios::binary | ios::in);
    while (fin.read((char *)&s, sizeof(s)))
    {
        s.display();
    }
    fin.close();
}

void search()
{
    student s;
    fstream fin;
    int Roll, flag = 0;
    cout << "Enter the roll number to be searched: ";
    cin >> Roll;
    fin.open("student.txt", ios::binary | ios::in);
    while (fin.read((char *)&s, sizeof(s)))
    {
        if (s.search(Roll))
        {
            s.display();
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Records not found." << endl;
    }
    fin.close();
}

void deletespecific_record()
{
    fstream fout, fin;
    student s;
    int Roll, flag = 0;
    cout << "Enter the specific roll number to be deleted:";
    cin >> Roll;
    fout.open("temp.txt", ios::binary | ios::out | ios::app);
    fin.open("student.txt", ios::binary | ios::in);
    while (fin.read((char *)&s, sizeof(s)))
    {
        if (s.search(Roll))
        {
            flag = 1;
        }
        else
        {
            fout.write((char *)&s, sizeof(s));
        }
    }
    if (flag == 0)
    {
        cout << "Records not found." << endl;
    }
    else
    {
        cout << "Record deleted" << endl;
    }
    remove("student.txt");
    rename("temp.txt", "student.txt");
    fin.close();
    fout.close();
}

int main()
{
    int choice;
    while (1)
    {
        cout << "1.Add Records:" << endl;
        cout << "2.Display Records:" << endl;
        cout << "3.Search the Record:" << endl;
        cout << "4.Delete specific records:" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter the choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add_records();
            break;
        case 2:
            read_records();
            break;
        case 3:
            search();
            break;
        case 4:
            deletespecific_record();
            break;
        case 5:
            exit(0);
        default:
            cout << "wrong choice" << endl;
        }
    }
    return 0;
}
