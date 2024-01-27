/*Implement a macro in C++ called "SQUARE" that takes an argument and
returns the square of that number. Use macro expansion techniques to
compute the square value without using any built-in mathematical functions.*/

#include<iostream>
using namespace std;
#define SQUARE(l)(l*l)
int main()
{
    int l,sq;
    cout<<"Enter any number:";
    cin>>l;
    sq=SQUARE(l);
    cout<<"Square using macro="<<sq<<endl;
    return 0;

}