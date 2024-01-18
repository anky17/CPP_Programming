/*WAP to implement dynamic memory allocation with new and delete
operators (for both simple variable and array variable).*/

#include <iostream>
using namespace std;
int main()
{
    int *p = new int;
    *p = 10;
    cout << "Value of ptr:" << *p << endl;
    delete p;
    return 0;
}

/*#include<iostream>
using namespace std;
int main( )
{
 int *ptr;
 ptr= new int;
 cout<<"The address of the allocated memory dynamically is:";
 cout<<ptr<<endl;
 cout<<"Enter the value to the allocated memory dynamically:";
 cin>> *ptr;
 cout<<"The entered value is:";
 cout<< *ptr;
 delete ptr;
 return 0;
}*/