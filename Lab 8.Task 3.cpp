#include<iostream>
using namespace std;
int main()
{
	int choice;
	double area, radius, length, width, base, height;
	cout << "Shape Area Calculator\n";
	cout << "1. Circle\n";
	cout << "2. Rectangle\n";
	cout << "3. Triangle\n";
	cout << "Enter your choice (1/2/3): ";
	cin >> choice;
	switch(choice)
	{
		case 1:
			cout << "Enter radius of the circle: ";
			cin >> radius;
			area = 3.14159 * radius * radius;
			cout << "Area of the circle " << " = " << area << endl;
			break;
		case 2:
		    cout << "Enter length and width of the rectangle: ";
			cin >> length >> width;
			area = length * width;
			cout << "Area of the rectangle " <<  " = " << area << endl;
			break;
		case 3:
		    cout << "Enter base and height of the rectangle: ";
			cin >> base >> height;
			area = 0.5 * base * height;
			cout << "Area of the triangle " << " = " << area << endl; 
	}
    return 0;
}
