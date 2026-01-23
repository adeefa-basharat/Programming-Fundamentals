#include<iostream>
using namespace std;
int main()
{
	// EMPLOYEE PAYROLL MANAGEMENT SYSTEM:
   char grade;
   cout<< "Enter employee grade (A, B, C): ";
   cin >> grade;
   int years_of_service;
   cout<< "Enter years of service: ";
   cin >> years_of_service;
   double basic_salary, bonus = 0, tax = 0, gross_salary, net_salary;
   if(grade == 'A')
   {
   	basic_salary = 50000;
   }
   else if (grade == 'B')
   {
   	basic_salary = 30000;
   }
   else if (grade == 'C')
   {
   	basic_salary = 20000;
   }
   else 
   {
   	cout << "Invalid grade entered!" << endl;
   }
   if(years_of_service >= 10)
   {
   	bonus = 0.10 * basic_salary;
   }
   else if(years_of_service >= 5 && years_of_service <= 9)
   {
   	bonus = 0.05 * basic_salary;
   }
   else
   {
   	bonus = 0;
   }
   gross_salary = basic_salary + bonus;
   if (gross_salary > 40000)
   {
   	tax = 0.20 * gross_salary;
   }
   else if (gross_salary >= 30000 && gross_salary <= 40000)
   {
   	tax = 0.10 * gross_salary;
   }
   else 
   {
   	tax = 0;
   }
   net_salary = gross_salary - tax;
   cout << "Basic Salary: $" << basic_salary << endl;
   cout << "Bonus: $" << bonus << endl;
   cout << "Gross Salary: $" << gross_salary << endl;
   cout << "Tax Deducted: $" << tax << endl;
   cout << "Net Salary: $" << net_salary << endl;
   return 0;
}
