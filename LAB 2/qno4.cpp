/*WAP to implement return by reference.*/

#include<iostream>
using namespace std;

int &func(int &x, int&y) 
{
  return (x<y)?x:y;
}
int main()
{
  int a=2,b=4;
  cout<<"Before calling the function a="<<a<<" and b="<<b<<endl;
  func(a,b)=-2;
  cout<<"Before calling the function a="<<a<<" and b="<<b<<endl;
  return 0;
}