/*WAP to find largest of two numbers using inline function.*/

#include<iostream>
using namespace std;
inline int largest(int a, int b)
{
    if(a>b)
    {
       return a;
    }
    else{
        return b;
    }
}
int main()
{
    int a,b;
    cout<<"Enter any two numbers:";
    cin>>a>>b;
    cout<<"The largest number is "<<largest(a,b);
    return 0;

}