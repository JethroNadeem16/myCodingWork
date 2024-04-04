#ifndef BASE_EMPLOYEE_HPP
#define BASE_EMPLOYEE_HPP

#include <iostream>
#include <string>

class Employee {
	protected:
		std::string _name;
		std::string _title;
		unsigned int _rate;
		unsigned int _hours_worked;
	public:
		Employee();
		Employee(
			std::string name,
			std::string title,
			unsigned int rate,
			unsigned int hours_worked
		);
		Employee(const Employee &e);

		std::string name() const; 
		std::string title() const; 
		unsigned int rate() const; 
		unsigned int hours_worked() const; 

		virtual void set_name(std::string name);
		virtual void set_title(std::string title);
		virtual void set_rate(unsigned int rate);
		virtual void set_hours_worked(unsigned int hours_worked);

		unsigned int calc_pay();
		virtual void raise();
		void work();

		Employee &operator=(const Employee &e);
		friend std::ostream &operator<<(std::ostream &out, const Employee &e);
};


#endif // BASE_EMPLOYEE_HPP
