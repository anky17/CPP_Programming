/*
2.Write a class student with roll, name, address, marks as member variables and
member functions to read and display the information of the students. Write
records of 10 students in a binary file and also read the records of the student
from the binary file. Also search a specific record of the student using roll
number as a key from the user input.
*/
#include<iostream>
#include<fstream>
using namespace std;

class student {
    int roll;
    char name[30];
    char address[30];
    float marks;
public:
    void input() {
        cout << "Enter the name of the student:" << endl;
        cin >> name;
        cout << "Enter the roll of the student:" << endl;
        cin >> roll;
        cout << "Enter the address of the student:" << endl;
        cin >> address;
        cout << "Enter the marks obtained by the student:" << endl;
        cin >> marks;
    }
    void display() {

        cout << "Name of the student=" << name;
        cout << "Roll of the student=" << roll << endl;
        cout << "Address of the student=" << address << endl;
        cout << "Marks of the student=" << marks << endl;

    }
    int check(int r) {
        if (r == roll)
            return 1;
        else
            return 0;
    }
};

void write_records() {
    int i;
    student s[10];
    fstream fout;
    fout.open("Student", ios::out | ios::app | ios::binary);
    cout << "Enter the information of 10 student:" << endl;
    for (i = 0;i < 10;i++) {
        s[i].input();
        fout.write((char*)&s[i], sizeof(s[i]));
    }
    fout.close();
}

void read_records() {
    student s;
    fstream fin;
    fin.open("Student", ios::in | ios::binary);
    while (fin.read((char*)&s, sizeof(s))) {
        s.display();
    }
    fin.close();
}

void search_specific_record() {
    student s;
    fstream fin;
    int Roll, flag = 0;
    cout << "Enter the roll number of the student to search the record for:";
    cin >> Roll;
    fin.open("Student", ios::in | ios::binary);
    while (fin.read((char*)&s, sizeof(s))) {
        if (s.check(Roll)) {
            s.display();
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "Record not found:" << endl;
    }            
    fin.close();
}

void deleteRecord() {
    fstream fin, fout;
    student s;
    int roll, flag = 0;
    cout << "Enter the roll number to be deleted:" << endl;
    cin >> roll;
    fin.open("Student", ios::in | ios::binary);
    fout.open("Temp", ios::out | ios::binary);
    while (fin.read((char*)&s, sizeof(s))) {
        if (s.check(roll)) {
            flag = 1;
        }
        else {
            fout.write((char*)&s, sizeof(s));
        }
    }
    if (flag == 0)
        cout << "Not found:" << endl;
    else
        cout << "Record Deleted:" << endl;

    fout.close();
    fin.close();
    remove("Student");
    rename("Temp", "Student");

}
int main() {
    int choice;
    while (1) {
        cout << "1.Add Records:" << endl;
        cout << "2.Display Records:" << endl;
        cout << "3.Search the Record:" << endl;
        cout << "4.Delete the record:" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter the choice:" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            write_records();
            break;
        case 2:
            read_records();
            break;
        case 3:
            search_specific_record();
            break;
        case 4:
            deleteRecord();
            break;
        case 5:
            exit(0);
        default:
            cout << "wrong choice" << endl;
        }
    }
    return 0;
}