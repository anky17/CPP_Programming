// WAP TO INHERIT PRIVATE CHILD CLASS
#include <iostream>
using namespace std;
class A
{
private:
    int i = 1;

protected:
    int j = 2;

public:
    int k = 3;
    int get_i()
    {
        return i;
    }
};
class B : private A
{
public:
    int get_j()
    {
        return j;
    }
    int get_k()
    {
        return k;
    }
};
int main()
{
    B ob1;
    // cout<<"Private member or base class:"<<ob1.get_i();   Inaccessible
    cout << "Private member is not inherited." << endl;
    cout << "Protected member: " << ob1.get_j() << endl;
    cout << "Public member: " << ob1.get_k();
}