/*You have a BankAccount base class, and your objective is to implement constructors and a destructor in it. Additionally, you'll derive a
specialized SavingsAccount class from the base class.
BankAccount Class:
➢ Create a base class named BankAccount with attributes accountNumber (string): Account number and balance (double):
Account balance.
➢ Implement a parameterized constructor to initialize attributes and implement a destructor displaying "Bank account with account number
[accountNumber] is being closed."
SavingsAccount Class:
➢ Derive SavingsAccount from BankAccount and add an attribute interestRate (double): Annual interest rate.
➢ Implement a parameterized constructor to initialize attributes.
Write a C++ program that:
a. Creates instances of SavingsAccount and sets attributes.
b. Demonstrates the behavior of constructors and the destructor during object creation and destruction.*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    string accountNumber;
    double balance;

public:
    BankAccount(string acc, double bal) : accountNumber(acc), balance(bal)
    {
        cout << "Bank account with account number " << accountNumber << " is created." << endl;
    }
    ~BankAccount()
    {
        cout << "Bank account with account number " << accountNumber << " is being closed." << endl;
    }
};
class SavingsAccount : public BankAccount
{
protected:
    double interestRate;

public:
    SavingsAccount(string AccountNumber, double balance, double InterestRate) : BankAccount(AccountNumber, balance), interestRate(InterestRate) {}
};
int main()
{
    SavingsAccount savingsAccount("SV123456", 1000.0, 11.05);
    return 0;
};