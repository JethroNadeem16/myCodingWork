//HOURLYEMPLOYEE.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include "HourlyEmployee.h"

using namespace std;

HourlyEmployee::HourlyEmployee(long id, const string &last, const string &first, const string &initial,int dept, int hw,int hr) {

	hours_worked=hw;
	hourly_rate=hr;
	overtime=0;
	payWeekly = 0.0;
	myIdNum = id;
	myLastName = last;
	myFirstName = first;
	myMiddleInitial = initial;
	myDeptCode = dept;

}

void HourlyEmployee::setHoursWorked(int hw) {

	hours_worked=hw;

}

int HourlyEmployee::getHoursWorked() {

	return hours_worked;

}

void HourlyEmployee::setHourlyRate(int hr) {

	hourly_rate=hr;

}

int HourlyEmployee::getHourlyRate() {

	return hourly_rate;

}

double HourlyEmployee::pay_calculation() {

	if(hours_worked>40) {
		overtime = hours_worked-40; //maximum 40 hours a week for normal rate
		payWeekly = (hourly_rate*40)+(hourly_rate*overtime*1.5);

	return payWeekly;

	}

	else {

		payWeekly=(hourly_rate*hours_worked);

	return payWeekly;

	}

}

void HourlyEmployee::printHourlyEmployee() {

	cout << endl;
	cout << "Employee ID Number: " << getIdNum() << endl;
	cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<getMiddleInitial() <<"." << endl;
	cout << "Dept Code: " << getDeptCode () << endl;
	cout << "Hours Worked : " <<HourlyEmployee::getHoursWorked () << endl;
	cout << "Hourly Rate : " <<HourlyEmployee::getHourlyRate () << endl;
	cout << "Weekly Payout : " <<HourlyEmployee::pay_calculation () << endl;

}