#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num < 0)
	{
		cout << "Factorial of negative numbers is not defined. ";
	}
	else
	{
		long long factorial = 1;
		for (int i = 1; i <= num; i++)
		{
			factorial *= i;
		}
		cout << "Factorial = " << factorial;
	}
	return 0;
}
