/*
4. WAP to store and retrieve all the information of the students in a file. Also
make sure to read the nth information of a student from the file and display
it.
*/
#include<iostream>
#include<fstream>
using namespace std;
class student {
    char name[30];
    int roll;
    float marks;
public:
    void input() {
        cout << "Enter the name of the student:" << endl;
        cin >> name;
        cout << "Enter the roll number of the student:" << endl;
        cin >> roll;
        cout << "Enter the marks obtained by the student:" << endl;
        cin >> marks;

    }
    void display() {
        cout << "Name of the student=" << name << endl;
        cout << "Roll of the student=" << roll << endl;
        cout << "Marks obtained by the student=" << marks << endl;
    }
    int check(int r) {
        if (r == roll)
            return 1;
        else
            return 0;
    }
};

void adddetails() {
    student s;
    fstream fout;
    fout.open("Student", ios::out | ios::app | ios::binary);
    s.input();
    fout.write((char*)&s, sizeof(s));
    fout.close();

}
void displayrecords() {
    student s;
    fstream fin;
    fin.open("Student", ios::in | ios::binary);
    while (fin.read((char*)&s, sizeof(s))) {
        s.display();
    }
    fin.close();

}
void display_nth_record() {
    student s;
    fstream fin;
    int count = 0, n;
    fin.open("Student", ios::in | ios::binary);
    while (fin.read((char*)&s, sizeof(s))) {
        count++;
    }
    fin.close();
    if (count == 0) {
        cout << "Record does not exist:" << endl;
    }

    else {
        cout << "The total number of records=" << count << endl;
        fin.open("Student_b", ios::in | ios::binary);
        cout << "Enter the number of record to read:" << endl;
        cin >> n;
        if (n > 0 && n <= count) {
            fin.seekg((n - 1) * sizeof(s));
            fin.read((char*)&s, sizeof(s));
            s.display();
            fin.close();
        }
    }
}
void modify() {
    fstream fout;
    student s;
    int roll, flag = 0, size = sizeof(s), count = 0, location;

    cout << "Enter the roll number to be modified:" << endl;

    cin >> roll;
    fout.open("Student", ios::ate | ios::out | ios::in | ios::binary);
    fout.seekg(0);
    while (fout.read((char*)&s, sizeof(s))) {
        count++;
        if (s.check(roll)) {
            s.input();
            location = size * (count - 1);
            fout.seekp(location, ios::beg);
            fout.write((char*)&s, sizeof(s));
            cout << "Modified" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Not found" << endl;
    fout.close();
}

int main() {
    int choice;
    while (1) {
        cout << "1.Add Details:" << endl;
        cout << "2.Display All Records:" << endl;
        cout << "3.Read nth Record:" << endl;
        cout << "4.Exit:" << endl;
        cout << "Enter the choice:" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            adddetails();
            break;
        case 2:
            displayrecords();
            break;
        case 3:
            display_nth_record();
            break;
        case 4:
            exit(0);
        default:
            cout << "Wrong choice" << endl;
        }
    }
    return 0;
}