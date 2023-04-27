/* File: test.cpp */
// File to test the basic employee class

#include <iostream>
#include <string>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

int main() {
  SalariedEmployee Se1 (001, "Jones", "Booker", "T", 22,3000);
  SalariedEmployee Se2 (002, "Hendrix", "Jimi", "NMI ", 14,1500);
  HourlyEmployee He1 (003, "Morrison", "Jim", "D", 03,56,23);
  HourlyEmployee He2 (004, "Morrison", "Jim", "D", 03,19,23);
  
  Se1.printSalariedEmployee();
  Se2.printSalariedEmployee();
  He1.printHourlyEmployee();
  He2.printHourlyEmployee();

  return 0;  

}
