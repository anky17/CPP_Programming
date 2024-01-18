// DEFAULT TYPE TEMPLATE ARGUMENT.

#include <iostream>
using namespace std;
template <class T = int, class T1 = float>
class Test
{
private:
    T a;
    T1 b;

public:
    Test(T x, T1 y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Test<float, char> t1(2.2, 'A');
    t1.show();
}
