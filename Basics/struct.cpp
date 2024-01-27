#include <iostream>
using namespace std;
class student
{
private:
    char name[50];
    int roll;

public:
    void getinfo()
    {
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your roll:";
        cin >> roll;
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Roll number:" << roll << endl;
    }
};
int main()
{
    student st;
    st.getinfo();
    st.display();
    return 0;
}
