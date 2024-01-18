#include <iostream>
using namespace std;
class feet
{
private:
    float feett;
    float inches;

public:
    feet()
    {
    }
    feet(float m)
    {
        feett = m * 3.28083;
        inches = 12 * feett;
    }
    void display()
    {
        cout << feett << " feet " << inches << " inches " << endl;
    }
};
int main()
{
    int m = 10;
    feet f1;
    f1 = m;
    f1.display();
    return 0;
}