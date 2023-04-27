#include "boss.hpp"

Boss::Boss() : Employee("boss"), _employees() {}

Boss::Boss(const std::vector<Employee> &e) : Employee("boss"), _employees(e.size()) {
	std::copy(e.begin(), e.end());
}

Boss::Boss(const Boss &e) : _begin{e._begin}, _end{e._end} {}

unsigned int Boss::employees() const{
	return _employees;
}

void Boss::hire(const Employee &e){
	_employees.push_back();
}

void Boss::fire(){
	_employees.pop_back();
}

void Boss::raise(){
	set_rate(2 * (rate() + 5u);
}

Boss &Boss::operator=(const Boss &e){
	if (this == &e) {
		return *this;
	}
	_name = e._name;
	_title = e._title;
	_rate = e._rate;
	_hours_worked = e._hours_worked;
	_begin = e._begin;
	_end = e._end;

}

std::ostream &operator<<(std::ostream &out, const Boss &e){
	out << e.begin() << ", " << e.end();
	return out;
}
