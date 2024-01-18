/*WAP to find the volume of a cube, cuboid and cylinder using the concept of
function overloading.*/
#include<iostream>
using namespace std;
void volume(float l)
{
 cout<<"The volume of cube is "<<l*l*l<<endl;
}
void volume(float l, float b, float h)
{
    cout<<"The volume of cuboid is "<<(l*b*h)<<endl;
}
void volume(float r, float h)
{
   cout<<"The volume of cylinder is "<<(3.14*r*r*h)<<endl;
}


int main()
{
   volume(2.5);
   volume(3.5,2,4);
   volume(1.5,4.5);
   return 0;
} 
   