/*Create a C++ program that simulates a banking system. Define a class called BankAccount with private member variables
accountNumber, balance, and a static member variable totalAccounts to keep track of the total number of bank accounts
created. Implement the following functionalities:
i. A constructor that initializes the accountNumber and balance variables and increments the totalAccounts count.
ii. A member function deposit() that takes an amount as input and adds it to the balance of the account.
iii. A member function withdraw() that takes an amount as input and subtracts it from the balance, only if the
balance is sufficient.
iv. A static member function getTotalAccounts() that returns the total number of bank accounts created.*/

#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    double balance;
    static int totalAccounts;

public:
    BankAccount(int accno, double bal)
    {
        accountNumber = accno;
        balance = bal;
        totalAccounts++;
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Successful Deposit:Current balance=" << balance << endl;
        }
        else
        {
            cout << "Insufficient amount";
        }
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdraw successful:Current balance=" << balance << endl;
        }
        else
        {
            cout << "Withdraw unsuccessful:Insufficient balance" << endl;
        }
    }
    static int getTotalAccounts()
    {
        return totalAccounts;
    }
};
int BankAccount::totalAccounts = 0;
int main()
{
    BankAccount ank(723, 2500);
    ank.deposit(1000);
    ank.withdraw(6000);
    cout << "Total Bank account=" << BankAccount::getTotalAccounts() << endl;
    return 0;
}