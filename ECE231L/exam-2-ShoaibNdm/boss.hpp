#ifndef DERIVED_BOSS_HPP
#define DERIVED_BOSS_HPP

#include <iostream>
#include "employee.hpp"
#include <vector>

class Boss: public Employee {
	public:
		Boss();
		std::vector<Employee> _employees;
		Boss(std::string name, std::string title, unsigned int rate, unsigned int hours_worked, std::vector<Employee> _employees);
		Boss(const Boss &e);

		unsigned int employees() const {
			return _employees.size();
		}

		void hire(const Employee &e);
		void fire();
		void raise();

		Boss &operator=(const Boss &e);
		friend std::ostream &operator<<(std::ostream &out, const Boss &e);

};

#endif
