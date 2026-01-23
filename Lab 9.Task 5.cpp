#include <iostream>
using namespace std;

void bankingSystem() {
    double balance = 1000.0; // Initial balance set to $1000
    int choice;
    double amount;

    while (true) {
        // Display menu
        cout << "\n--- Banking System Menu ---" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";

        // Input validation for menu choice
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            cin.clear(); // Clear error flag
            cin.ignore(10000, '\n'); // Ignore invalid input
            continue;
        }

        switch (choice) {
            case 1: // Deposit Money
                cout << "Enter amount to deposit: ";
                if (!(cin >> amount)) {
                    cout << "Invalid amount. Please enter a numeric value." << endl;
                    cin.clear();
                    cin.ignore(10000, '\n');
                    break;
                }
                if (amount < 0) {
                    cout << "Deposit amount cannot be negative." << endl;
                } else {
                    balance += amount;
                    cout << "$" << amount << " deposited successfully. Current balance: $" << balance << endl;
                }
                break;

            case 2: // Withdraw Money
                cout << "Enter amount to withdraw: ";
                if (!(cin >> amount)) {
                    cout << "Invalid amount. Please enter a numeric value." << endl;
                    cin.clear();
                    cin.ignore(10000, '\n');
                    break;
                }
                if (amount < 0) {
                    cout << "Withdrawal amount cannot be negative." << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance for this withdrawal." << endl;
                } else {
                    balance -= amount;
                    cout << "$" << amount << " withdrawn successfully. Current balance: $" << balance << endl;
                }
                break;

            case 3: // Check Balance
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 4: // Exit
                cout << "Thank you for using the banking system. Goodbye!" << endl;
                return;

            default:
                cout << "Invalid menu choice. Please select a valid option (1-4)." << endl;
        }
    }
}

int main() {
    bankingSystem();
    return 0;
}
