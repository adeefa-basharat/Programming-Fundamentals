#include<iostream>
using namespace std;
int main()
{
	int num = 100;
	void *ptr = &num;
	cout << "Value using void pointer: " << *(int*)ptr << endl;
	return 0;
}
