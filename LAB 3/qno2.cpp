/*Create a class called “time” with data member hour, minute and second. Initialize all the data member using
constructor. WAP to add two time object using necessary member functions and display the result.*/

#include<iostream>
using namespace std;
 class time
 {
    private:
    int hour,min,sec;

    public:
    time()
    {
        hour=1;
        min=20;
        sec=20;
    }
 
    void display()
    {
        cout<<"TWO TIME AFTER ADDITION IS:"<<endl;
        cout<<hour<<" hour "<<min<<" minutes "<<sec<<" sec ";
    }
    void addTime(time t1, time t2)
    {
        int sum=(t1.sec+t1.min*60+t1.hour*3600)+(t2.sec+t2.min*60+t2.hour*3600);
        hour=sum/3600;
        min=(sum%3600)/60;
        sec=(sum%3600)%60;
    }
 };
 
 int main()
 {
    time t1,t2,t3;
    t3.addTime(t1,t2);
    t3.display();
    return 0;
 }