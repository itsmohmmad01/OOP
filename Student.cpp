#include<iostream>
#include<string>
#include<iomanip> 
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    string accountType;
    double balance;

public:
    BankAccount() {
        accountHolder = "Unknown";
        accountNumber = 0;
        accountType = "Savings";
        balance = 0.0;
    }

    BankAccount(string holder, int accNumber, string type, double initialBalance) {
        accountHolder = holder;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    string getAccountHolder() {
        return accountHolder;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    string getAccountType() {
        return accountType;
    }

    double getBalance() {
        return balance;
    }

    void setAccountType(string newType) {
        accountType = newType;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Depositing " << amount<< endl;
            cout << "New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawing " << amount << endl;
            cout << "New Balance: "  << balance << endl;
        } else {
            cout << "Insufficient funds" << endl;
        }
    }

    void displayAccountDetails() {
        cout << "Account Details:" << endl;
        cout << "Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Type: " << accountType << endl;
        cout << "Balance: "  << balance << endl;
    }
};

int main() {
    BankAccount account1("Amar", 123456, "Savings", 5000.00); 
    BankAccount account2; 
    account1.displayAccountDetails();
    account1.deposit(2000.00); 
    account1.withdraw(1500.00); 
    account1.setAccountType("Current");
    cout << endl << "Final Detail" << endl;
    account1.displayAccountDetails();
    return 0;
}

