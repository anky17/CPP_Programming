// Problem Statement : To read and write a File in C++.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    // by default ios::out mode, automatically deletes
    // the content of file. To append the content, open in ios:app
    // fout.open("sample.txt", ios::app)
    fout.open("simple.txt");
    string ak;
    cout << "Enter any string to store in file press -1 to stop:";
    // Execute a loop If file successfully opened
    while (fout)
    {

        getline(cin, ak);

        // Press -1 to exit
        if (ak == "-1")
        {
            break;
        }
        fout << ak << endl;
    }
    fout.close();
    ifstream fin;
    //// by default open mode = ios::in mode
    fin.open("simple.txt");
    cout << "Retrive from file:";
    string ank;
    // // Execute a loop until EOF (End of File)
    while (!fin.eof())
    {
        fin >> ank;
        cout << ank;
    }
    fout.close();
    return 0;
}