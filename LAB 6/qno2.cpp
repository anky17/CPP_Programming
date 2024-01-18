/* You are provided with a Time class that represents time in hours and minutes. The class has two private member variables: hours (to store the
time in hours) and minutes (to store the time in minutes). Your task is to implement a member function that allows conversion from Time to int,
representing the total minutes.*/
#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minutes;

public:
    Time(int h, int m)
    {
        hour = h;
        minutes = m;
    }
    operator int()
    {
        return 60 * hour + minutes;
    }
};
int main()
{
    Time t1(2, 20);
    int minute;
    minute = t1;
    cout << "After Conversion:" << minute << endl;
    return 0;
}