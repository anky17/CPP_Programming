/* File Handling with C++ using fstream class object */
/* To write the Content in File */
/* Then to read the content of file*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fout;
    fout.open("heyy.txt", ios::trunc | ios::out | ios::in);
    string str;
    cout << "Enter any string to store in file and press -1 to stop storing:";
    // Execute a loop If file successfully Opened
    while (fout)
    {
        getline(cin, str);
        if (str == "-1")
        {
            break;
        }
        fout << str << endl;
    }
    fout.seekg(0, ios::beg);
    string str1;
    cout << "Retrived from file:" << endl;
    while (!fout.eof())
    {
        getline(fout, str);
        cout << str;
    }
    fout.close();
    return 0;
}