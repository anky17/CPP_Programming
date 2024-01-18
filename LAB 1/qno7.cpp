/*WAP to swap values of two integers, two characters, two floats and two
strings respectively using function overloading.*/


#include<iostream>
#include <string>
using namespace std;

//Function Definition
void swap(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}

void swap(float &a, float &b)
{
float temp;
temp=a;
a=b;
b=temp;
}

void swap(char &a, char &b)
{
char temp;
temp=a;
a=b;
b=temp;
}


void swap(string &a, string &b)
{
string temp;
temp=a;
a=b;
b=temp;
}

int main()
{
int ix,iy;
float fx,fy;
char cx,cy;
string str1,str2;

cout<<"Enter 2 integers:";
cin>>ix>>iy;
cout<<"Enter 2 floating point no:";
cin>>fx>>fy;
cout<<"Enter 2 characters:";
cin>>cx>>cy;
cout<<"Enter 2 strings:";
cin>>str1>>str2;

cout<<"\nBefore Swapping:";
cout<<ix<<"\t"<<iy;
swap(ix,iy);
cout<<"\nAfter swapping:";
cout<<ix<<"\t"<<iy<<endl;

cout<<"\nBefore Swapping:";
cout<<fx<<"\t"<<fy;
swap(fx,fy);
cout<<"\nAfter swapping:";
cout<<fx<<"\t"<<fy<<endl;

cout<<"\nBefore Swapping:";
cout<<cx<<"\t"<<cy;
swap(cx,cy);
cout<<"\nAfter swapping:";
cout<<cx<<"\t"<<cy<<endl;

cout<<"\nBefore Swapping:";
cout<<str1<<"\t"<<str2;
swap(str1,str2);
cout<<"\nAfter swapping:";
cout<<str1<<"\t"<<str2<<endl;
return 0;
}