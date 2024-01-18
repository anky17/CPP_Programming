/*CLASS TEMPLATE WITH MULTIPLE PARAMETERS*/

/*EXAMPLE TO SHOW THE USE AND SYNTAX OF CLASS TEMPLATE WITH MULTIPLE PARAMETERS*/
#include <iostream>
using namespace std;
template <class T1, class T2>
class Test
{
    T1 a;
    T2 b;

public:
    Test(T1 x, T2 y)
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
    Test<float, int> test1(3.4, 56);
    Test<int, char> test2(34, 'A');
    test1.show();
    test2.show();
    return 0;
}