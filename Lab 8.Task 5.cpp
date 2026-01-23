#include<iostream>
using namespace std;
int main()
{
	int category, item, quantity;
	float total = 0, discount = 0;
	cout << "Choose caregory (1=Electronics, 2=Clothing, 3=Groceries): ";
	cin >> category;
	switch (category)
	{
		case 1:
		  	cout << "Electronics - 1=Laptop($1000), 2=Smartphone($700), 3=Headphoes($150) : ";
		  	cin >> item;
		  	switch (item)
		  	{
		  		case 1: total = 1000; break;
		  		case 2: total = 700; break;
		  		case 3: total = 150; break;
		  		default: cout << "Invalid item.";
		  		return 0;
			}
			break;
		case 2:
			cout << "Clothing - 1=Jacket($120), 2=T-shirt($40), 3=Jeans($60): ";
			cin >> item;
			switch (item)
			{
				case 1: total = 120; break;
				case 2: total = 40; break;
				case 3: total = 60; break;
				default: cout << "Invalid item";
				return 0;
			 } 
			 break;
		case 3:
			cout << "Groceries - 1=Milk($2), 2=Bread($3), 3=Eggs($5): ";
			cin >> item;
			switch (item)
			{
				case 1: total = 2; break;
				case 2: total = 3; break;
				case 3: total = 5; break;
				default: cout << "Invalid item";
				return 0;
			 }
			 break;
		default:
		cout << "Invalid category.";
		return 0;	  
	}
	cout << "Enter quantity: ";
	cin >> quantity;
	total *= quantity;
	// Discount logic
	if (total < 100) discount = 0;
	else if (total >= 100 && total <= 500) discount = 0.10;
	else discount = 0.20;
	total -= total * discount;
	cout << "Total after discount: $" << total << endl;
	cout << "Invoice generated.";
	return 0;
}
