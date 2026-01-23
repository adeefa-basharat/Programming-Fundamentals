#include<iostream>
using namespace std;
int main()
{
	// LARGEST NUMBER
	int a, b, c;
	cout<<"Enter three numbers: ";
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		cout << "Largest: " << a << endl;
	}
	if (b >= a && b >= c)
	{
		cout<< "Largest: " << b << endl;
	}
	if (c >= a && c>= b)
	{
		cout<< "Largest: " << c << endl;
	}
	return 0;
}
