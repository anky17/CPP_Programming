#include<iostream>
#include<string>
using namespace std;
class ankit
{
    public:
    string name="Ankit";
    void display();    //Note that all the member functions defined inside the class definition are by default inline.
};
void ankit::display()
{
   cout<<"Hello "<<name;
}
int main()
{
    ankit a;
    a.display();    
    return 0;
}