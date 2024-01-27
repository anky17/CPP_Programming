/*You are building a simulation of a game involving characters and enemies. You have a base class called Character and a derived
class called Enemy. Each class has a virtual destructor for proper memory cleanup. Additionally, the Character class has a member
function void displayInfo() that prints "This is a character." and the Enemy class has an additional member function void
displayType() that prints "This is an enemy." Create the necessary classes with appropriate member functions and inheritance
relationships. Write a program that demonstrates the concept of virtual destructors by using an array of pointers to Character
objects, where some pointers point to Character instances and some to Enemy instances. Use these pointers to call the displayInfo()
and displayType() functions for each object. Implement the destructors to display a message when an object is destroyed.*/

#include <iostream>
using namespace std;
class Character
{
public:
    virtual ~Character()
    {
        cout << "Character object destroyed." << endl;
    }
    virtual void displayInfo()
    {
        cout << "This is a character." << endl;
    }
};
class Enemy : public Character
{
public:
    ~Enemy()
    {
        cout << "Enemy object destroyed." << endl;
    }
    void displayType()
    {
        cout << "This is an enemy." << endl;
    }
};
int main()
{

    Character *c1[2];
    c1[1] = new Character();
    c1[0] = new Enemy();

    for (int i = 0; i < 2; i++)
    {
        c1[i]->displayInfo();
        if (Enemy *enemy = dynamic_cast<Enemy *>(c1[i]))
        {
            enemy->displayType();
        }
    }
    for (int i = 0; i < 2; i++)
    {
        delete c1[i];
    }
    return 0;
}
