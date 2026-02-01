#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;   // Maximum number of products

// Structure for Product
struct Product {
    string name;
    int quantity;
    float price;
};

Product inventory[MAX];
int productCount = 0;

// Function to add a product
void addProduct() {
    if (productCount >= MAX) {
        cout << "Inventory full!\n";
        return;
    }

    cout << "Enter product name: ";
    cin >> inventory[productCount].name;

    cout << "Enter quantity: ";
    cin >> inventory[productCount].quantity;

    cout << "Enter price: ";
    cin >> inventory[productCount].price;

    productCount++;
    cout << "Product added successfully!\n";
}

// Function to view all products
void viewInventory() {
    if (productCount == 0) {
        cout << "Inventory is empty.\n";
        return;
    }

    cout << "\nInventory List:\n";
    for (int i = 0; i < productCount; i++) {
        cout << "Name: " << inventory[i].name
             << ", Quantity: " << inventory[i].quantity
             << ", Price: " << inventory[i].price << endl;
    }
}

// Function to update stock
void updateStock() {
    string searchName;
    cout << "Enter product name to update: ";
    cin >> searchName;

    for (int i = 0; i < productCount; i++) {
        if (inventory[i].name == searchName) {
            cout << "Enter new quantity: ";
            cin >> inventory[i].quantity;
            cout << "Stock updated successfully!\n";
            return;
        }
    }

    cout << "Product not found.\n";
}

// Function to search product
void searchProduct() {
    string searchName;
    cout << "Enter product name to search: ";
    cin >> searchName;

    for (int i = 0; i < productCount; i++) {
        if (inventory[i].name == searchName) {
            cout << "Product Found!\n";
            cout << "Name: " << inventory[i].name
                 << ", Quantity: " << inventory[i].quantity
                 << ", Price: " << inventory[i].price << endl;
            return;
        }
    }

    cout << "Product not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. View Inventory\n";
        cout << "3. Update Stock\n";
        cout << "4. Search Product\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addProduct(); break;
            case 2: viewInventory(); break;
            case 3: updateStock(); break;
            case 4: searchProduct(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
