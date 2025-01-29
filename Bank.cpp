#include <iostream>
using namespace std;

int main() {
    int balance = 0, choice, amount, transactionCount = 0;
    int amounts[10], balances[10];

    while (true) {
        cout << "\n1. Deposit Cash";
        cout << "\n2. Withdraw Cash";
        cout << "\n3. Print Passbook";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
           case 1:
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                balance += amount;
                amounts[transactionCount] = amount;
                balances[transactionCount] = balance;
                transactionCount++;
                cout << "Deposited successfully. Current balance: " << balance << "\n";
                break;

            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;

   
                if (amount > balance) {
                cout << "Insufficient balance.\n";
                }
                else {
                    balance -= amount;
                    amounts[transactionCount] = -amount;
                    balances[transactionCount] = balance;
                    transactionCount++;
                    cout << "Amount withdrawn successfully. Current balance: " << balance << "\n";
                    }
                  break;
                  
            case 3: 
                if (transactionCount == 0) {
                    cout << "No transactions available.\n";
                } else {
                    cout << "\nPassbook Entries:\n";
                    cout << "---------------------------------------------\n";
                    cout << "   No.    Amount       Balance         \n";
                    cout << "---------------------------------------------\n";
                    for (int i = 0; i < transactionCount; i++) {
                        cout << "   " << i + 1 << "      "
                             << amounts[i] << "             "
                             << balances[i] << "         \n";
                    }
                    cout << "---------------------------------------------\n";
                }
                break;

            case 4:
                cout << "Exiting.\n";
        }
    }

    return 0;
}

