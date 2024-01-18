// Overload ++ when used as prefix
#include <iostream>
using namespace std;
class student
{
private:
    int prefix;

public:
    student()
    {
        prefix = 5;
    }
    void operator++()
    {
        ++prefix;
    }
    void operator++(int)
    {
        prefix++;
    }
    void display();
};
void student::display()
{
    cout << "Count=" << prefix << endl;
}
int main()
{
    student s1;
    ++s1;
    s1.display();
    s1++;
    s1.display();
    return 0;
}