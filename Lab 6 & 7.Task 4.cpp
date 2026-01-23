#include<iostream>
using namespace std;
int main()
{
	string name;
	double math, physics, chemistry, total, percentage;
	cout << "Enter student name: ";
	cin >> name;
	cout << "Enter marks of Maths, Physics, Chemistry (out of 100):  ";
	cin >> math >> physics >> chemistry;
	total = (math + physics + chemistry);
	percentage = (total / 300) * 100;
	cout << "Results for: " << name << ":" << endl;
	cout << "Total Marks: " << total << "/300" << endl;
	cout << "Percentage: " << percentage << "%" << endl;
	if(percentage >= 90)
	{
		cout << "Grade: A" << endl;
	}
	else if(percentage >= 80 && percentage < 90)
	{
		cout << "Grade: B" << endl;
	}
	else if(percentage >= 70 && percentage < 80)
	{
		cout << "Grade: C" << endl;
	}
	else if(percentage >= 60 && percentage < 70)
	{
		cout<< "Grade: D" << endl;
	}
	else
	{
		cout << "Grade: F" << endl;
	}
	if(percentage > 85)
	{
		cout << "Eligible for scholarship";
	}
	else
	{
		cout << "Not Eligible for scholarship";
	}
	return 0;
}
