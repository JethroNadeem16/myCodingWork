#include <iostream>
#include <vector>
#include "employee.hpp"
#include "boss.hpp"
//#include "guard.hpp"

int main() {
	Employee Jim("Jim", "Assistant manager", 5, 35);
	std::cout << "My name is " << Jim.name() << '\n';
	std::cout << "I am a " << Jim.title() << '\n';
	std::cout << Jim.name() << " has worked " << Jim.hours_worked() << " hours\n";

	Employee Pam("Pam", "Receptionist", 25, 35);
	Employee Dwight("Dwight", "Assistant to the manager", 25, 35);
	std::vector<Employee> emps = {Jim, Pam};

	Boss Michael("Michael", "Manager", 40, 2, emps);
	Guard Hank("Hank", "Security Guard", 30, 30, "Baton");
	Michael.hire(Dwight);

	std::cout << Dwight << '\n';

	std::cout << Michael << '\n';
	Michael.fire();
	std::cout << Michael << '\n';
	Michael.hire(Hank);
	std::cout << Michael << '\n';

	Hank.attack(Dwight);

	std::cout << Jim << '\n';
	std::cout << "Jim had been payed " << Jim.calc_pay() << '\n';
	Hank.discipline(Jim);
	std::cout << Jim << "\n\n";

	Boss Tim("Tim", "Director", 45, 4, emps);
	Employee Bob("Bob", "IT", 26, 30);
	Employee Jessie("Jessie", "Sales", 26, 30);
	std::vector<Employee> emps = {Bob, Jessie};

	Guard Lee("Lee", "Security Guard", 32, 32, "Tazer");

	// Create new guard
	// Test == and != operator for Guard
	// Create a new boss and two new employees, connect boss to employees and g
	
	
	return 0;
}
