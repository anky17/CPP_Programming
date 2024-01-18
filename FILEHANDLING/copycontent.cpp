/*Write a program that will copy the content from one file to another, change
the case of letters to upper case if they are in lower case and vice-versa and
store in next file.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{

    string name;
    string address;
    string sex;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your address: ";
    cin >> address;
    cout << "Enter your sex: ";
    cin >> sex;
    ofstream fout;
    fout.open("no.txt", ios::app | ios::out);
   
    fout << name << endl;
    fout << address << endl;
    fout << sex << endl;
    fout.close();

    ifstream fin;
    fin.open("no.txt", ios::in);
    ofstream fou;
    fou.open("copy.txt", ios::app | ios::out);
    char ch;
    while (!fin.eof())
    {
        fin.get(ch);
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        else
        {
            ch = ch;
        }
        fou << ch;
    }
    fou.close();
    fin.close();
}
