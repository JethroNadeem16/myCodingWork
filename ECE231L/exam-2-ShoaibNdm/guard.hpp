#ifndef DERIVED_GUARD_HPP
#define DERIVED_GUARD_HPP

#include <iostream>
#include "employee.hpp"
#include <string>

class Guard:: public Employee {
	public:
		Guard();
		std::string _weapon;
		Guard(std::string weapon, std::string title, unsigned int rate, unsigned int hours_worked);
		Guard(const Guard &e);

		std::string weapon() const;
		void attack(const Employee &e);
		void discipline(Employee &e);
		
		Guard &operator=(const Guard &e);
		bool operator==(const Guard &e);
		bool operator!=(const Guard &e);

		friend std::ostream &operator<<(std::ostream &out, const Guard &e);

};

#endif
