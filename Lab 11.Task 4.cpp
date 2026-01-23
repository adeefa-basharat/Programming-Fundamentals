#include<iostream>
using namespace std;
int main()
{
	int arr[] = {10, 20, 30, 40, 50};
	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "Array length: " << length << endl;
	return 0;
}
