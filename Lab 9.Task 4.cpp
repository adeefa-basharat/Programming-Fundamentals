#include<iostream>
using namespace std;
int main()
{
	int num = 1;
	int sum = 0;
	while(num <= 5)
	{
		sum += num;
		num++;
	}
	cout << "The sum of first five natural numbers is: " << sum << endl;
	return 0;
}
