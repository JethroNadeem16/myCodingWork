//SALARIEDEMPLOYEE.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(long id, const string &last, const string &first, const string &initial,int dept, int sal) {

monthly_salary = sal;
myIdNum = id;
myLastName = last;
myFirstName = first;
myMiddleInitial = initial;
myDeptCode = dept;

}

void SalariedEmployee::setSalary(int sal) {

	monthly_salary=sal;

}

int SalariedEmployee::getSalary() {

	return monthly_salary;

}

double SalariedEmployee::salary_calculation() {

	double fraction = 1.0;
	monthly_salary=monthly_salary*fraction;

	return monthly_salary;

}

void SalariedEmployee::printSalariedEmployee() {

cout << endl;
cout << "Employee ID Number: " << getIdNum() << endl;
cout << "Name: " << getLastName() <<", " << getFirstName() << " " << getMiddleInitial() <<"." << endl;
cout << "Dept Code: " << getDeptCode () << endl;
cout << "Salary : " << SalariedEmployee::salary_calculation () << endl;

}