#include <iostream>
using namespace std;
class Time
{
private:
    int hour, second, minute;

public:
    class out_of_range
    {
    private:
        char *message;

    public:
        out_of_range(char *name)
        {
            message = name;
        }
        void display()
        {
            cout << message;
        }
    };

    void input()
    {
        cout << "Enter the hour, minutes and seconds:";
        cin >> hour >> minute >> second;
        if (hour > 12 && minute > 60 && second > 60)
            throw out_of_range("Exception! Invalid hour sec and min ");
        if (hour > 12 && minute > 60)
            throw out_of_range("Exception due to invalid values for hour and minute:");
        if (hour > 12 && second > 60)
            throw out_of_range("Exception due to invalid values for hour and second:");
        if (minute > 60 && second > 60)
            throw out_of_range("Exception due to invalid values for minute and second:");
        if (hour > 12)
            throw out_of_range("Exception due to invalid value for hour:");
        if (minute > 60)
            throw out_of_range("Exception due to invalid value for minute:");
        if (second > 60)
            throw out_of_range("Exception due to invalid value for second:");
    }
    void display()
    {
        cout << hour << " hour " << minute << " minutes " << second << " seconds ";
    }
};
int main()
{
    Time t;
    try
    {
        t.input();
        t.display();
    }
    catch (Time::out_of_range range)
    {
        range.display();
    }
    return 0;
}
