#include "employee.hpp"

Employee::Employee() : _name{"Employee0451"}, _title{"GenericEmployee"},
	_rate{20}, _hours_worked{20} {}

Employee::Employee(std::string name, std::string title, unsigned int rate,
		unsigned int hours_worked) : _name{name}, _title{title}, _rate{rate},
		_hours_worked{hours_worked} {}

Employee::Employee(const Employee &e) : _name{e._name}, _title{e._title},
		_rate{e._rate}, _hours_worked{e._hours_worked} {}

std::string Employee::name() const {
	return _name;
}

std::string Employee::title() const {
	return _title;
}

unsigned int Employee::rate() const {
	return _rate;
}

unsigned int Employee::hours_worked() const {
	return _hours_worked;
}

void Employee::set_name(std::string name) {
	_name = name;
}

void Employee::set_title(std::string title) {
	_title = title;
}

void Employee::set_rate(unsigned int rate) {
	_rate = rate;
}

void Employee::set_hours_worked(unsigned int hours_worked) {
	// 40u is the number 40 as an unsigned int
	_hours_worked = (hours_worked > 40u) ? 40u : hours_worked;
}

unsigned int Employee::calc_pay() {
	unsigned int x = hours_worked() * rate();
	set_hours_worked(0u);
	return x;
}

void Employee::raise() {
	set_rate(rate() + 5u);
}

void Employee::work() {
	set_hours_worked(hours_worked() + 8u);
}

Employee &Employee::operator=(const Employee &e) {
	if (this == &e) {
		return *this;
	}
	_name = e._name;
	_title = e._title;
	_rate = e._rate;
	_hours_worked = e._hours_worked;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Employee &e) {
	out << e._name << ", " << e._title << ", " << e._rate << ", ";
	out << e._hours_worked;
	return out;
}
