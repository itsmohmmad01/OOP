//Exception handling - A Simple Banking System for an Indian Bank

#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
    string ownerName;
    double balance;

public:
    BankAccount(string name, double deposit) 
	{
        if (deposit < 0) throw "Initial deposit cannot be negative.";
        ownerName = name;
        balance = deposit;
        cout << "Account created for " << ownerName << " with " << balance << "\n";
    }
	void deposit(double amount) 
	{
        if (amount < 0) throw "Deposit amount cannot be negative.";
        balance += amount;
        cout << "Deposited " << amount << " into " << ownerName << "'s account\n";
    }
	void withdraw(double amount) 
	{
        if (amount < 0) throw "Withdrawal amount cannot be negative.";
        if (amount > balance) throw "Insufficient funds.";
        balance -= amount;
        cout << "Withdrew " << amount << " from " << ownerName << "'s account\n";
    }
	void transfer(BankAccount &to, double amount) 
	{
        withdraw(amount);      
        to.deposit(amount);
        cout << "Transferred " << amount << " to " << to.ownerName << "\n";
    }
	void divideBalance(double num) 
	{
        if (num == 0) throw "Cannot divide by zero.";
        balance /= num;
        cout << "New balance after division: " << balance << "\n";
    }
	void show() const 
	{
        cout << ownerName << "'s balance: " << balance << "\n";
    }
};

int main() 
{
    try 
	{
        BankAccount rahul("Rahul Sharma", 5000);
        rahul.deposit(1000);
	    try 
		{
            rahul.withdraw(7000); 
        } 
		catch (const char* msg) 
		{
            cout << "Error: " << msg << "\n";
        }
		BankAccount priya("Priya Verma", 0);
        rahul.transfer(priya, 3000);
		rahul.show();
        priya.show();
		try 
		{
            rahul.divideBalance(0);  // Should throw
        } 
		catch (const char* msg) 
		{
            cout << "Error: " << msg << "\n";
        }

    } 
	catch (const char* msg) 
	{
        cout << "Exception: " << msg << "\n";
    }

    return 0;
}
