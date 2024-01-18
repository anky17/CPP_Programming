/*Write a program that will copy the content from one file to another, change the case of letters to upper case if they are in lower case and
vice-versa and store in next file.*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void address_records()
{
    string name;
    string address;
    int roll;
    cout << "Enter the name, address and roll number of the student:";
    cin >> name >> address >> roll;
    fstream fout;
    fout.open("student.txt", ios::out | ios::app);
    fout << name << endl;
    fout << address << endl;
    fout << roll << endl;
    fout.close();
}
void copy()
{
    fstream fin;
    fin.open("student.txt", ios::in);
    fstream fout;
    fout.open("text.txt", ios::out | ios::app);
    char ch;
    while (!fin.eof())
    {
        {
            fin.get(ch);
        }
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        else
            ch = ch;
        fout << ch;
    }
    fin.close();
    fout.close();
}
int main()
{
    int choice;
    while (1)
    {
        cout << "1. Add records to the file." << endl;
        cout << "2.Copy the records to the file." << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            address_records();
            break;
        case 2:
            copy();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Error:";
        }
    }
    return 0;
}
