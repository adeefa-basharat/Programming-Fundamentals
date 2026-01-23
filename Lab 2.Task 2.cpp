#include<iostream>
using namespace std;
int main()
{
	double x1=3, x2=6;
	double y1=4, y2=8;
	double squared_distance=(x2-x1) * (x2-x1) + (y2-y1) * (y2-y1);
	cout<< "The squared distance between the points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << squared_distance << endl;
	return 0; 
}
