#include<iostream>
using namespace std;
int main()
{
	// TRAFFIC SIGNAL SYSTEM:
	char signal;
	cout << "Enter signal colour (R/G/Y): ";
	cin >> signal;
	if(signal == 'R')
	{
		cout<< "Stop" << endl;
	}
	if(signal == 'G')
	{
		cout<< "Go" << endl;
	}
	if(signal == 'Y')
	{
		cout<< "Slow Down" << endl;
	}
	return 0;
}
