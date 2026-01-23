#include<iostream>
using namespace std;
int main()
{
	int num;
	int i = 1;
	cout << "Enter a number for table: ";
	cin >> num;
	while(i <= 10)
	{
		cout << num << " * " << i << " = " << num * i << endl;
		i++;
	}
	return 0;
}
