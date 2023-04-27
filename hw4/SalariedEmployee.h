//SALARIEDEMPLOYEE.H

#include <string>
#include "Employee.h"

using namespace std;

class SalariedEmployee : public Employee {

public:

SalariedEmployee(long = 0, const string & = "" , const string & = "", const string & = "", int = 0, int = 0);

int monthly_salary;

void setSalary(int);

int getSalary();

double salary_calculation();

void printSalariedEmployee();

};