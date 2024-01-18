/*1. Write a program that will copy the content from one file to another, change
the case of letters to upper case if they are in lower case and vice-versa and
store in next file.
*/

#include<iostream>
#include<fstream>

using namespace std;

void add_records() {
    char name[30];
    char address[30];
    char jobtitle[30];
    cout << "Enter the name,address and title of the job of the employee:" << endl;
    cin >> name >> address >> jobtitle;

    fstream fout;
    fout.open("first.txt", ios::out | ios::app);
    fout << name << endl;
    fout << address << endl;
    fout << jobtitle << endl;
    fout.close();
}

void copy_contents() {
    fstream fin;
    fin.open("first.txt", ios::in);
    fstream fout;
    fout.open("second.txt", ios::out | ios::app);
    char ch;
    while (!fin.eof()) {
        fin.get(ch);
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;//changing to upper case

        else if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;//changing to lower case
        else
            ch = ch;
        fout << ch;
    }
    fin.close();
    fout.close();
    cout << "Data has been copied:" << endl;
}

int main() {
    int choice;
    while (1) {
        cout << "1.Add Records to the file:" << endl;
        cout << "2.Copy contents of file:" << endl;
        cout << "3.Exit" << endl;

        cout << "Enter the choice:" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            add_records();
            break;
        case 2:
            copy_contents();
            break;
        case 3:
            exit(0);
        default:
            cout << "The choice you entered is wrong:" << endl;
        }
    }
    return 0;
}
