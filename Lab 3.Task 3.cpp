#include<iostream>
using namespace std;
int main()
{
	double balance;
	cout << "Enter account balance : $";
	cin >> balance;
	bool loyal;
	cout << "Loyal customer? (1 for yes, 0 for no): ";
	cin >> loyal;
	(balance < 100) ? cout<<"Low Balance" : (balance <=500)? cout<<"Standard": cout<< "Premium";
	(balance > 200 && loyal==1) ? cout<< " :You are eligible" : cout<< " :You are not eligible";
	return 0;
}
