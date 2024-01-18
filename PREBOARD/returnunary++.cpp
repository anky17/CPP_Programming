// WAP TO OVERLOAD POSTFIX INCREMENT(++) OPERATOR BY RETURNING VALUE THROUGH OBJECT.
#include <iostream>
using namespace std;
class counter
{
private:
    int count;

public:
    counter() {}
    counter(int x)
    {
        count = x;
    }
    void display()
    {
        cout << "counter=" << count << endl;
    }
    counter operator++(int);
};
counter counter::operator++(int)
{
    count = ++count;
    return counter(count);
}
int main()
{
    counter c1, c2;
    c1 = counter(3);
    cout << "Before overloading postfix(++):" << endl;
    c1.display();
    c2 = c1++;
    cout << "After overloading postfix(++):" << endl;
    c2.display();
}