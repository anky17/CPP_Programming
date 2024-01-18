/*WAP TO ADD TWO INTEGERS AND FLOATING DATA USING CLASS TEMPLATES*/

#include <iostream>
using namespace std;
template <class T>
class sample
{
private:
    T a, b, s;

public:
    sample(T x, T y)
    {
        a = x;
        b = y;
    }
    void sum()
    {
        s = a + b;
    }
    void display()
    {
        cout << "sum:" << s << endl;
    }
};
int main()
{
    sample<int> s1(4, 5);
    sample<float> s2(3.4, 5.3);
    cout << "For int type values:" << endl;
    s1.sum();
    s1.display();
    cout << "For float type values:" << endl;
    s2.sum();
    s2.display();
    return 0;
}