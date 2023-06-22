#include <iostream>

class Account()
{
protected:

    double  balance;

public:

    Account(char[] name,double balance) = 0;
    virtual void deposit(double amount) = 0; (to deposit money into the account)
    virtual void withdraw(double amount) = 0; (to withdraw money from the account)
    virtual void displayBalance() = 0; (to display the current balance of the account) 
};

Account :: Account(char[] name, double balance)
{
    name = "NA";
    balance = 0.0;
}

void    Account::deposit(double amount)
{
    balance += amount;
}

void    Account::withdraw(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
    }
    else
        std::cout<<"do not have enough money";
    
}

void    Account::displayBalance()
{
    std::cout<<name <<" current balance: "<< balance;
}
 
class SavingAccount : public Account {
private:
    double interestRate; // Member variable to store the interest rate

public:
    SavingAccount(double interestRate) : interestRate(interestRate) {
        // Constructor to initialize the interest rate
    }

    void deposit(double amount) override {
        // Implement the deposit function specific to a savings account
        balance += amount;
        cout << "Amount $" << amount << " deposited into the savings account." << endl;
    }

    void withdraw(double amount) override {
        // Implement the withdraw function specific to a savings account
        if (balance - amount >= 0) {
            balance -= amount;
            cout << "Amount $" << amount << " withdrawn from the savings account." << endl;
        } else {
            cout << "Insufficient funds in the savings account." << endl;
        }
    }

    void displayBalance() override {
        // Implement the displayBalance function specific to a savings account
        cout << "Savings Account Balance: $" << balance << endl;
    }
};

class CurrentAccount : public Account {
private:
    double overdraftLimit; // Member variable to store the overdraft limit

public:
    CurrentAccount(double overdraftLimit) : overdraftLimit(overdraftLimit) {
        // Constructor to initialize the overdraft limit
    }

    void deposit(double amount) override {
        // Implement the deposit function specific to a current account
        balance += amount;
        cout << "Amount $" << amount << " deposited into the current account." << endl;
    }

    void withdraw(double amount) override {
        // Implement the withdraw function specific to a current account
        if (balance - amount >= -overdraftLimit) {
            balance -= amount;
            cout << "Amount $" << amount << " withdrawn from the current account." << endl;
        } else {
            cout << "Withdrawal amount exceeds the overdraft limit." << endl;
        }
    }

    void displayBalance() override {
        // Implement the displayBalance function specific to a current account
        cout << "Current Account Balance: $" << balance << endl;
    }
};
