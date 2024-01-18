#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];

    ofstream myfile;
    myfile.open("hello.txt");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    myfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    myfile << data << endl;

    myfile.close();

    ifstream infile;
    infile.open("hello.txt");

    cout << "Reading from a file" << endl;
    infile >> data;

    cout << data << endl;
    infile >> data;
    cout << data << endl;

    infile.close();

    return 0;
}