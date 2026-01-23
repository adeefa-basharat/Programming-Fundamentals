#include<iostream>
using namespace std;
int main()
{
	int choice;
	float amount, converted;
	cout << "Convert USD to: 1=PKR, 2=INR, 3=Euros: ";
	cin >> choice;
	cout << "Enter amount in USD: ";
	cin >> amount;
	switch (choice)
	{
		case 1:
		converted = amount * 280; // Example rate: 1USD = 280 PKR
		cout << "Amount in PKR: " << converted;
		break;
		case 2:
		converted = amount * 83; // Example rate: 1 USD = 83 INR
		cout << "Amount in INR: " << converted;
		break;
		case 3: converted = amount * 0.93; // Example rate: 1 USD = 0.93 Euros
		cout << "Amount in Euros: " << converted;
		break;
		default:
		cout < "Invalid choice.";     	 
	}
    return 0;
}
