#include<iostream>
using namespace std;
int main()
{
	// "TERNARY OPERATOR:"
	int num;
	cout<< "Enter an integer: ";
	cin>>num;
	cout << "The number " << num << " is " << (num % 2 == 0 ? "even." : "odd.") << endl;
	return 0;
}
