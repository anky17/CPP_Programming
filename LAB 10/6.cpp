/*
6.Write operator functions as member of a class to overload arithmetic
operator +,logical operator <= and stream operator << to operate on the
objects of user defined type Mytime(hour, minute, second)
*/

#include<iostream>
using namespace std;
class Mytime {
    int hour, minute, second;
public:
    void input() {
        cout << "Enter the values for hour, minute and second:" << endl;
        cin >> hour >> minute >> second;
    }
    friend ostream& operator <<(ostream&, Mytime&);
    Mytime operator+(Mytime t) {
        Mytime temp;
        int sum = second + minute * 60 + hour * 60 * 60 + t.second + t.minute * 60 + t.hour * 60 * 60;
        temp.hour = sum / 3600;
        temp.minute = (sum % 3600) / 60;
        temp.second = (sum % 3600) % 60;
        return temp;
    }
    void operator <=(Mytime t) {
        int mag1 = second + minute * 60 + hour * 60 * 60;
        int mag2 = t.second + t.minute * 60 + t.hour * 60 * 60;
        if (mag1 < mag2)
            cout << "First object is less than second object" << endl;
        if (mag1 == mag2)
            cout << "First object is equal to the second object" << endl;
    }
};

ostream& operator <<(ostream& os, Mytime& t) {
    os << t.hour << " Hour " << t.minute << " Minute and " << t.second << " Second" << endl;
    return os;
}

int main() {
    Mytime t1;
    Mytime t2;
    t1.input();
    t2.input();
    cout << "The given times are:" << endl;
    cout << t1;
    cout << t2;
    Mytime t3 = t1 + t2;
    cout << "After the addition of two time objects result=" << endl;
    cout << t3;
    t1 <= t2;
    return 0;
}
/*
output:
Enter the values for hour, minute and second:
6 7 8
Enter the values for hour, minute and second:
9 0 6
The given times are:
6 Hour 7 Minute and 8 Second
9 Hour 0 Minute and 6 Second
After the addition of two time objects result=
15 Hour 7 Minute and 14 Second
First object is less than second object
*/