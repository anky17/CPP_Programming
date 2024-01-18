/*Create a class time having data members as hour, minute and second. Then add two time objects taking object as an
function argument and subtract two time objects taking objects as an function arguments and as well as
returning object by the function concept. Implement nameless temporary object concept somewhere in your code.*/

#include <iostream>
using namespace std;
class time
{
private:
  int hour, min, sec;

public:
  time()
  {
    hour = 0;
    min = 0;
    sec = 0;
  }
  time(int h, int m, int s)
  {
    hour = h;
    min = m;
    sec = s;
  }
  void input()
  {
    cout << "Enter the time in hour, minute and second respectively:";
    cin >> hour >> min >> sec;
  }
  void display()
  {
    cout << hour << " hour " << min << " minute " << sec << " second " << endl;
  }
  void addtime(time t1, time t2)
  {
    int sum = (t1.sec + t1.min * 60 + t1.hour * 3600) + (t2.sec + t2.min * 60 + t2.hour * 3600);
    hour = sum / 3600;
    min = (sum % 3600) / 60;
    sec = (sum % 3600) % 60;
  }
  time subTime(time t1, time t2)
  {
    int diff = (t1.sec + t1.min * 60 + t1.hour * 60 * 60) - (t2.sec + t2.min * 60 + t2.hour * 60 * 60);
    if (diff < 0)
      diff = -diff;
    hour = diff / (3600);
    min = diff % (3600) / 60;
    sec = diff % (3600) % 60;
    return time(hour, min, sec);
  }
};

int main()
{
  time t1, t2, t3, t4, t5;
  t1.input();
  t2.input();
  t3.addtime(t1, t2);
  cout << "After addition of time:" << endl;
  t3.display();
  t5 = t4.subTime(t1, t2);
  cout << "After subtraction of time:" << endl;
  t5.display();
  return 0;
}