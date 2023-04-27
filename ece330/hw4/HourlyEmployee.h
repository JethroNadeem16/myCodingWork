//HOURLYEMPLOYEE.H

#include <string>
#include "Employee.h"

using namespace std;

class HourlyEmployee : public Employee {

	public:

	HourlyEmployee(long = 0, const string & ="", const string & ="", const string & = "", int=0, int=0, int=0);

	int hours_worked, hourly_rate, overtime;
	double payWeekly;
	
	void setHoursWorked(int);
	int getHoursWorked();
	void setHourlyRate(int);
	int getHourlyRate();
	double pay_calculation();
	void printHourlyEmployee();
};