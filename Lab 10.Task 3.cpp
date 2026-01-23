#include<iostream>
using namespace std;
int main()
{
	int N;
	int sum = 0;
	cout << "Enter a number: ";
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		sum +=i;
	}
	cout << "Sum = " << sum;
	return 0;
}
