#include<iostream>
using namespace std;
int main()
{
	// ATM MACHINE:
	double balance;
	cout << "Enter your balance: ";
	cin >> balance;
	double withdraw;
	cout << "Enter withdrawal amount: ";
	cin >> withdraw;
	if (withdraw <= balance)
	{
		balance -= withdraw;
		cout << "Remaining balance: " << balance << endl;
	}
	else
	{
		cout << "Insufficient balance: " << endl;
	}
	return 0;
}
