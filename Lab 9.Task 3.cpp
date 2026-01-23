#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	while (n<0)
	{
		cout << "You have enetred negative number. Please enter again.";
		cin >> n;
	}
	cout << "You have entered: " << n << endl;
	return 0;
}
