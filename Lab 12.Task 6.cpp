#include <iostream>
using namespace std;

// Function to display menu
void displayMenu() {
    cout << "\n--- Restaurant Menu ---\n";
    cout << "1. Burger      Rs. 250\n";
    cout << "2. Pizza       Rs. 500\n";
    cout << "3. Sandwich    Rs. 200\n";
    cout << "4. Fries       Rs. 150\n";
    cout << "5. Cold Drink  Rs. 100\n";
    cout << "6. Exit\n";
}

// Function to calculate item cost
double itemCost(double price, int quantity) {
    return price * quantity;
}

// Function to calculate final bill with tax
double finalBill(double total) {
    return total + (total * 0.10); // 10% tax
}

int main() {
    int choice, quantity;
    double total = 0;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter quantity: ";
            cin >> quantity;
        }

        switch (choice) {
            case 1:
                total += itemCost(250, quantity);
                break;
            case 2:
                total += itemCost(500, quantity);
                break;
            case 3:
                total += itemCost(200, quantity);
                break;
            case 4:
                total += itemCost(150, quantity);
                break;
            case 5:
                total += itemCost(100, quantity);
                break;
            case 6:
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while	(choice != 6);

    cout << "\nTotal Bill (with 10% tax): Rs. " << finalBill(total) << endl;

    return 0;
}
