#include<iostream>
using namespace std;
int main()
{
	int N = 5;
	cout << "Pattern 1: " << endl;
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			cout << " * ";
	    }
	    cout << endl;
	}
	cout << "Pattern 2:" << endl;
	for (int i = N; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	return 0;
}
