//5. Write a program to overload stream operators to read and display the time units.
#include <iostream>
using namespace std;

class MyTime {
    int hour, minute, second;

public:
    friend istream& operator>>(istream&, MyTime&);
    friend ostream& operator<<(ostream&, const MyTime&);
};

istream& operator>>(istream& is, MyTime& t) {
    is >> t.hour >> t.minute >> t.second;
    return is;
}

ostream& operator<<(ostream& os, const MyTime& t) {
    os << t.hour << " Hour, " << t.minute << " Minute, and " << t.second << " Second";
    return os;
}

int main() {
    MyTime t;
    cout << "Enter the time in hours, minutes, and seconds: " << endl;
    cin >> t;
    cout << "The entered time is: ";
    cout << t << endl;

    return 0;
}

/*
Output:
Enter the time in hours, minutes, and seconds:
9 6 8
The entered time is: 9 Hour, 6 Minute, and 8 Second
*/