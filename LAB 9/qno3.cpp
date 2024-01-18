/*Develop a simple Banking System with two classes: Account and Transaction. The Account class represents bank accounts, including private
data members for accountNumber, accountHolder, and balance, along with public member functions for initialization and data retrieval. The
Transaction class handles individual transactions, containing private data members accountNumber, transactionType, and amount, and a constructor
for  transaction setup. Your task is to create a Friend function named processTransaction that links the Account and Transaction classes. This
function should update the account balance based on the transaction type (deposit or withdrawal) and return the updated account balance. Implement
the classes and function in C++ and demonstrate the banking system's functionality with appropriate test cases.*/
#include <iostream>
#include <string>
using namespace std;
class Transaction;
class Account
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    Account()
    {
    }
    Account(int accountNumber, string accountHolder, double balance)
    {
        this->accountNumber = accountNumber;
        this->accountHolder = accountHolder;
        this->balance = balance;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }
    string getAccountHolder()
    {
        return accountHolder;
    }
    double getBalance()
    {
        return balance;
    }
    friend double processTransaction(Account &account, Transaction &transaction);
};
class Transaction
{
private:
    int accountNumber;
    string transactionType;
    double amount;

public:
    Transaction(int accountNumber, string transactionType, double amount)
    {
        this->accountNumber = accountNumber;
        this->transactionType = transactionType;
        this->amount = amount;
    }

    friend double processTransaction(Account &account, Transaction &transaction);
};
// Friend function to process transactions
double processTransaction(Account &account, Transaction &transaction)
{
    if (account.accountNumber == transaction.accountNumber)
    {
        if (transaction.transactionType == "deposit")
        {
            account.balance += transaction.amount;
        }
        else if (transaction.transactionType == "withdrawal")
        {
            account.balance -= transaction.amount;
        }
        return account.balance;
    }
    else
        return 0;
}
int main()
{
    // Create an account
    Account account(123456, "Ank", 1000.0);
    cout << "Account Details:" << endl;
    cout << "Account Holder: " << account.getAccountHolder() << endl;
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Initial Balance: " << account.getBalance() << endl;

    // Create a transaction
    Transaction transaction(123456, "deposit", 500.0);
    Transaction transaction2(123456, "withdrawal", 1000.0);

    // Process the transaction
    double newBalance = processTransaction(account, transaction);
    cout << "After Deposit:" << endl;
    if (newBalance == 0)
    {
        cout << "Error:Account Number does not match." << endl;
    }
    else
        cout << "Updated balance: " << newBalance << endl;

    double newBal2 = processTransaction(account, transaction2);
    cout << "After Withdrawal:" << endl;
    // Display the updated balance
    if (newBal2 == 0)
    {
        cout << "Error:Account Number does not match." << endl;
    }
    else
        cout << "Updated balance: " << newBal2 << endl;

    return 0;
}