#include <iostream>
using namespace std;
template <class T1 = int, class T2 = int>
class test
{
private:
    T1 a;
    T2 b;

public:
    test(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
};
int main()
{
    test<float, float> s1(2.25, 3.34);
    test<char, char> s2('a', 'b');
    s1.display();
    s2.display();
}