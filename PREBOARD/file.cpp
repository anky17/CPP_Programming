// Example program of tellg( ) and tellp( )
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fout.open("myfile.txt");
    fout << "angry";
    int n = fout.tellp();
    fout.close();
    cout << "Position of put pointer=" << n << endl;
    fin.open("myfile.txt");
    int m = fin.tellg();
    fin.close();
    cout << "Position of get pointer=" << m << endl;
    return 0;
}