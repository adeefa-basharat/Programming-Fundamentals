#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout << "Enter temperature in celsius: ";
	cin >> temp;
	if(temp >= 40)
	{
		cout << "Stay indoors because it's extremely hot and could be dangerous to health. " << endl;
	}
	else if(temp >= 30 && temp <= 39)
	{
		cout << "Drink plenty of water to stay hydrated in the weather. " << endl;
	}
	else if(temp >= 20 && temp <= 29)
	{
		cout << "The weather is pleasant and suitable for outdoor activities. " << endl;
	}
	else
	{
		cout << "Wear warm clothes to stay comfortable in the cooler weather. " << endl;
	}
	return 0;
}
