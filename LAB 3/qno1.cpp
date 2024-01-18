/*WAP to create a class Teacher with data members teacher_id, teacher_name, department and subject_taught and 
create member functions for reading and displaying data members. At least one of the member function should be
defined outside the class.*/

#include<iostream>
#include<string>
using namespace std;
class teacher
 {

  private:
  int teacher_id;
  string teacher_name;
  string department;
  string subject_taught;
  
  public:
  void display();
  void input()
  {
    cout<<"Enter the teacher_id:";
    cin>>teacher_id;
    cout<<"Enter the teacher_name:";
    cin>>teacher_name;
    cout<<"Enter the department name:";
    cin>>department;
    cout<<"Enter the subject_taught:";
    cin>>subject_taught;
  }
};

  void teacher::display()
  {
    cout<<endl<<"The detail of the Teacher is:"<<endl;
    cout<<"Name="<<teacher_name<<endl;
    cout<<"ID no="<<teacher_id<<endl;
    cout<<"Department Name="<<department<<endl;
    cout<<"Subject Name="<<subject_taught<<endl;
  }

  int main()
  {
    teacher a;
    a.input();
    a.display();
    return 0;
  }
