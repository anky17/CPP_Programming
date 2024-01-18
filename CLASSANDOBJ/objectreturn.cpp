// WAP OBJECT AS FUNCTION ARGUMENTS.
#include<iostream>
using namespace std;
class Time{
    private:
    int hours;
    int minutes;
    public:
    void gettime(int h , int m){
        hours=h;
        minutes=m;
    }
    void display(){
        cout<<hours<<" hour "<<minutes<<" minutes "<<endl;
    }
    void sum(Time t1, Time t2){
        
    }
};