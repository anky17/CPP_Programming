/*Create a class TimeCounter to represent a time counter in seconds. Implement the prefix and postfix increment
operators ++ to increase the time counter by one second. The class provides separate functions for prefix and postfix
increment operations to showcase the difference in behavior between the operators. The example usage demonstrates the
time counter's functionality with appropriate test cases, displaying the updated time counter after each
increment operation.*/
#include <iostream>
using namespace std;
class TimeCounter
{
private:
    int sec;

public:
    TimeCounter()
    {
        sec = 5;
    }
    // prefix increment operator
    void operator++()
    {
        ++sec;
    }
    // postfix increment operator
    void operator++(int)
    {
        sec++;
    }
    void display()
    {
        cout << "Time=" << sec << endl;
    }
};
int main()
{
    TimeCounter t1;
    ++t1;
    cout << "Time after using prefix operator" << endl;
    t1.display();
    cout << "Time after using postfix operator" << endl;
    t1++;
    t1.display();
    return 0;
}