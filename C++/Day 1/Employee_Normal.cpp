#include <iostream>
using namespace std;

class Employee_Normal
{
	private:
		int eid;
		char eName[50];
		double basic, da, hra, ta, gross;
	public:
		void setData();
		void DisplayData();
		void CalculateSalary();
};

void Employee_Normal::setData()
{
	cout << "Enter Employee ID" << "\n";
	cin >> eid;
	cout << "Enter Employee Name" << "\n";
	cin >> eName;
	cout << "Enter Base Salary" << "\n";
	cin >> basic;
}

void Employee_Normal::CalculateSalary()
{
	da = .15*basic;
	hra = .25*basic;
	ta = .12*basic;
	gross = basic + da + hra + ta;
}

void Employee_Normal::DisplayData()
{
	cout << "Employee ID:	" << eid << endl;
	cout << "Employee Name:	" << eName << endl;
	cout << "Gross Salary	" << gross << endl;

}

int main()
{
	Employee_Normal obj;
	char ch;
	obj.setData();
	obj.CalculateSalary();
	obj.DisplayData();
	cout << "Enter space to continue";
	cin >> ch;
	return 0;
}