// WAP TO OVERLOAD STREAM INSERTION AND EXTRACTION OPERATOR.

#include <iostream>
using namespace std;

class person
{

private:
    int age;
    string name;

public:
    person()
    {
        age = 0;
        name = "noname";
    }

    friend ostream &operator<<(ostream &give, person &p);
    friend istream &operator>>(istream &take, person &p);
};

istream &operator>>(istream &take, person &p)
{
    take >> p.name >> p.age;
    return take;
}
ostream &operator<<(ostream &give, person &p)
{
    give << "Hello! " << p.name << endl;
    give << "Your age " << p.age;
    return give;
}


int main()
{
    cout << "Enter your name and age:";
    person p1;
    cin >> p1;
    cout << p1;
    return 0;
}
