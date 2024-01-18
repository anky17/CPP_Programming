/*Write a program according to the specification given below:
i.Create a class Account with data members acc _no, balance, and min_balance(static)
ii.Include methods for reading and displaying values of objects.
iii.Define static member function to display min_balance
iv.Create array of objects to store data of 5 accounts and read and display values of each object */
#include <iostream>
using namespace std;
class Account
{
private:
    int acc_no;
    double balance;
    static double min_balance;

public:
    void input()
    {
        cout << "Enter your account number:";
        cin >> acc_no;
        cout << "Enter your initial balance:";
        cin >> balance;
    }
    void display()
    {
        cout << "Account Number:" << acc_no << endl;
        cout << "Initial Balance:" << balance << endl;
    }
    static void display_min()
    {
        cout << "Minimum Balance:" << min_balance << endl;
    }
};
double Account::min_balance = 1000.00;
int main()
{
    Account a[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        cout << "Enter the details of account " << i + 1 << endl;
        a[i].input();
    }
    for (i = 0; i < 2; i++)
    {
        cout << endl
             << "The details of account " << i + 1 << " is" << endl;
        a[i].display();
    }
    cout << endl;
    Account::display_min();
    return 0;
}