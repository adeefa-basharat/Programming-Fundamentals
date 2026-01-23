#include<iostream>
using namespace std;
int main()
{
	// ELIGIBILITY FOR LOAN
	double salary;
	cout << "Enter salary ($): ";
	cin >> salary;
	int experience;
	cout << "Enter years of experience: ";
	cin >> experience;
	if( salary >= 25000 && experience > 5)
	{
		cout << "Eligible for loan." << endl;
	}
	else
	{
		cout << "Not eligible for loan." << endl;
	}
	return 0;
}
