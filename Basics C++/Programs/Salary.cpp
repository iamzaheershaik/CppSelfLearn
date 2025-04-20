#include <iostream>
using namespace std;

int main()
{
	float BaseSalary;
	cout << "Enter the Base Salary";
	cin>>BaseSalary;

	float Allowance;
	cout << "Enter the Percentage of Allowance Per Month";
	cin>>Allowance;
	
	float Deduction;
	cout <<"Enter the Percentage of Deduction Per Month";
	cin>>Deduction;

	float NetSalary = (BaseSalary + (BaseSalary * Allowance/100) - (BaseSalary * Deduction/100));
	cout<<NetSalary;
}