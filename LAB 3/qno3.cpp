/*Create a C++ class called 'Person' with a constructor that initializes the name and age member variables. 
Implement a copy constructor that creates a new Person object by copying the name and age from an existing object. 
Show the usage of both constructors by creating an object named 'person1' with name 'Sunil' and age 25. 
Then, use the constructors to create another object named 'person2' with the same name and age as 'person1'. 
Print the details (name and age) of 'person2'.*/

#include<iostream>
#include<string>
using namespace std;
class Person
{
    private:
    string name;
    int age;
    public:
    Person()
    {
        name="Sunil";
        age=25;
    }
    Person(Person &t)
    {
        name=t.name;
        age=t.age;
    }
    void display()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
    }
};

int main()
{
    Person person1;
    Person person2(person1);
    cout<<endl<<"Copy Constructor:"<<endl;
    person2.display();
    return 0;
}
