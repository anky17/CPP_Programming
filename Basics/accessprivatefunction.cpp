// WAP TO ADD PRIVATE MEMBER FUNCTION.
#include <iostream>
using namespace std;
class stdd
{
private:
    int a;
    void display();

public:
    void input();
};
void stdd::display()
{
    cout << "A=" << a << endl;
}
void stdd::input()
{
    cout << "Enter the value of a:";
    cin >> a;
    display();
}
int main()
{
    stdd s;
    s.input();
    return 0;
}