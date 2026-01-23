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
	if ( username == "admin" && password == "admin123")
	{
      cout << "Authentication successful! " ; 
	} 
	string role;
	cout << "Enter role (Admin, Guest, any other): ";
	cin >> role;
	if(role == "Admin")
	{
		cout << "Full Access " << endl;
	} 
	else if(role == "Guest")
	{
		cout << "Limited Access " << endl;
	}
	else if(role == "any other")
    {
    	cout << "No Access " << endl;
	}
	else
	{
		cout << "Authentication Failed. Access Denied" ;
	}
	return 0;
}
