#include<iostream>
using namespace std;
int main()
{
	string correctPassword = "secure123";
	string userInput;
	do
	{
	 cout << "Enter the password: ";
	 cin >> userInput;
	 if (userInput != correctPassword)
	 {
	 	cout << "Incorrect password! Try again. " << endl;
	 }
	}while (userInput != correctPassword);
	cout << "Password accepted! Access granted. " << endl;
	return 0;
}
