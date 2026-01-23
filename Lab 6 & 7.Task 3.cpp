#include<iostream>
using namespace std;
int main()
{
	string username;
	cout << "Enter username: ";
	cin >> username;
	string password;
	cout << "Enter password: ";
	cin >> password;
	string correctUsername = "admin";
	string correctPassword = "12345";
	if(username == correctUsername && password == correctPassword)
	{
	 cout<< "Access Granted. " << endl;
	}
	else if(username == correctUsername)
	{
		cout << "Wrong Password. " << endl;
	}
	else
	{
		cout << "User Not Found. " << endl;
	}
	return 0;
}
