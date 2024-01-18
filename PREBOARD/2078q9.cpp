#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("hello.txt", ios::in);

    if (!file)
    {
        cout << "File Doesn't Exists!!!" << endl;
    }
    else
    {
        char ch;
        while (!file.eof())
        {
            file.get(ch);
            cout << ch;
        }
    }
    file.close();

    return 0;
}