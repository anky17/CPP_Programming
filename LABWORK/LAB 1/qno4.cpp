/*WAP to implement endl, setw, setprecision,fixed and scientific Manipulator.*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num=1982.826294;
    cout<<"Ankit"<<endl<<setw(10)<<"Ankit"<<endl;
    cout<<fixed<<num<<endl;
    cout<<fixed<<setprecision(2)<<num<<endl;
    cout<<scientific<<num<<endl;
    cout<<scientific<<setprecision(3)<<num<<endl;
   return 0;  
}