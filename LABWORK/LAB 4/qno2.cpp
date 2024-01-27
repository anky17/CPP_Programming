/*Write a program to implement Pointer to object and member access.*/
// HINT-> class_name *pointer_object= &object_name;
// pointer_object->member function;
// OR (*pointer_object). member function

#include <iostream>
using namespace std;
class student
{
private:
  string name;
  int roll;
  float marks;

public:
  void input()
  {
    cout << "Enter your name:";
    getline(cin, name);
    cout << "Enter your roll number:";
    cin >> roll;
    cout << "Enter your marks:";
    cin >> marks;
  }
  void display();
};
void student::display()
{

  cout << endl
       << "Name=" << name << endl;
  cout << "Roll Number=" << roll << endl;
  cout << "Marks=" << marks << endl;
}
int main()
{
  student s1;
  student *a = &s1;
  a->input();
  (*a).display();
  return 0;
}