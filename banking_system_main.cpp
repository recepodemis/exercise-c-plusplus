//#include "banking_system_main.hpp""

#include <iostream>

class Account {
protected:
    double balance;

public:
    Account() : balance(0.0) {}

    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void displayBalance() = 0;
    virtual void calculateInterest() = 0; // New pure virtual function
};

class SavingAccount : public Account {
private:
    double interestRate;

public:
    SavingAccount(double interestRate) : interestRate(interestRate) {}

    void deposit(double amount) override {
        balance += amount;
        std::cout << "Amount $" << amount << " deposited into the savings account." << std::endl;
    }

    void withdraw(double amount) override {
        if (balance - amount >= 0) {
            balance -= amount;
            std::cout << "Amount $" << amount << " withdrawn from the savings account." << std::endl;
        } else {
            std::cout << "Insufficient funds in the savings account." << std::endl;
        }
    }

    void displayBalance() override {
        std::cout << "Savings Account Balance: $" << balance << std::endl;
    }

    void calculateInterest() override {
        double interest = balance * interestRate;
        balance += interest;
        std::cout << "Interest calculated and added to the savings account. Current balance: $" << balance << std::endl;
    }
};

class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(double overdraftLimit) : overdraftLimit(overdraftLimit) {}

    void deposit(double amount) override {
        balance += amount;
        std::cout << "Amount $" << amount << " deposited into the current account." << std::endl;
    }

    void withdraw(double amount) override {
        if (balance - amount >= -overdraftLimit) {
            balance -= amount;
            std::cout << "Amount $" << amount << " withdrawn from the current account." << std::endl;
        } else {
            std::cout << "Withdrawal amount exceeds the overdraft limit." << std::endl;
        }
    }

    void displayBalance() override {
        std::cout << "Current Account Balance: $" << balance << std::endl;
    }

    void calculateInterest() override {
        // No interest calculation for a current account
        std::cout << "Interest calculation not applicable to the current account." << std::endl;
    }
};

int main() {
    Account* savingsAccount = new SavingAccount(0.05);
    Account* currentAccount = new CurrentAccount(1000.0);

    savingsAccount->deposit(1000.0);
    savingsAccount->calculateInterest();
    savingsAccount->displayBalance();

    currentAccount->deposit(500.0);
    currentAccount->withdraw(200.0);
    currentAccount->displayBalance();

    delete savingsAccount;
    delete currentAccount;

    return 0;
}
