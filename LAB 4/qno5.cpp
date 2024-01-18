/*Define a structure called BankAccount to represent a bank account with attributes such as account number,
account holder name, and account balance. Include methods to deposit and withdraw money from the account.
In the main function, create an instance of the BankAccount structure, prompt the user for account details and
initial balance, perform a deposit, perform a withdrawal, and print the updated account balance.*/

#include <iostream>
#include <string>
using namespace std;
struct BankAccount
{
private:
    int accountnumber;
    string holdername;
    double balance;

public:
    void input()
    {
        cout << "Enter your accountnumber:";
        cin >> accountnumber;
        cout << "Enter your accountname:";
        cin >> holdername;
        cout << "Enter initial balance:";
        cin >> balance;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount deposit successful." << endl;
    }
    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Amount withdraw successful." << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }
    void display()
    {

        cout << "Current Balance=" << balance << endl;
    }
};
int main()
{
    double amt;
    double out;
    BankAccount b1;
    b1.input();
    cout << "Enter the deposit amount:";
    cin >> amt;
    b1.deposit(amt);
    cout << "Enter the withdrawal amount:";
    cin >> out;
    b1.withdraw(out);
    b1.display();
    return 0;
}
