#include<iostream>
#include<math.h>
using namespace std;
namespace first
{
 void func()
 {
 float x,y;
 cout << "Enter the values for x and y:";
 cin>>x>>y;
 cout<<"The sum of the two numbers="<<x+y <<endl;
 }
}
namespace second
{
 void func( )
 {
 float real,imag;
 cout<<"Enter the real and imaginary part:";
 cin>>real>>imag;
 float mag=sqrt(real*real+imag*imag);
 cout<<"The given complex number is:";
 cout<<"("<< real <<" , "<< imag <<")"; cout<<endl;
 cout<<"The magnitude of the complex number=";
 cout<<mag;
 }
}
int main( )
{
 first::func( );
 second::func( );
 //If the functions are to be called separately;
 //using namespace first;
 //func( ); //calls function from namespace first
 //OR
// using namespace second;
 //func( ); calls function from namespace second 
return 0;
}
