/*Write a program to read inputs from a keyboard and display the output in the
monitor using Input/Output streams. */
#include<iostream>
using namespace std;
int main()
{
   char name[50];
    cout<<"Enter your name:";
    cin.get(name,50);
    cout<<"Your name is "<<name<<endl;    
    return 0;
}


/*
Write a program to read inputs from a keyboard and display the output in the
monitor using Input/Output streams.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"What is your name?"<<endl;
    getline(cin,name);
    cout<<"Hello! "<<name<<endl;    
    return 0;
}
*/