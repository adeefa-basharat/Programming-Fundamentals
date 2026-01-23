#include<iostream>
using namespace std;
int main()
{
	// Prices of the items
	double item1 = 12.95;
	double item2 = 24.95;
	double item3 = 6.95;
	double item4 = 14.95;
	double item5 = 3.95;
	// Display the price of each item
	cout << "Price of item 1: $" << item1 << endl;
	cout << "Price of item 2: $" << item2 << endl;
	cout << "Price of item 3: $" << item3 << endl;
	cout << "Price of item 4: $" << item4 << endl;
	cout << "Price of item 5: $" << item5 << endl;
	// Calculate the subtotal
	double subtotal = item1 + item2 + item3 + item4 + item5;
	cout << "Subtotal: $" << subtotal << endl;
	// Calculate the sales tax (6% of the subtotal)
	double sales_tax = subtotal * 0.06;
	cout << "Sales Tax (6%): $" << sales_tax << endl;
	// Calculate the total amount (subtotal + sales tax)
	double total = subtotal + sales_tax;
	cout << "Total: $" << total << endl;
	return 0;
}
