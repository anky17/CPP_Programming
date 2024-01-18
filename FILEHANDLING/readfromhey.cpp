#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("ankit.txt", ios::in);
    string str;
    while (!fin.good())
    {
        getline(fin, str);
        cout << endl
             << str;
    }
    fin.close();
    return 0;
}