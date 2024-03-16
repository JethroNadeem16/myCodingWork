#include "circle.hpp"
#include <cmath>

// Area of a circle is 2 * pi * radius, if radius is 1 then 
//	2 * pi * 1 == 2 * pi
Circle::Circle() : _radius{1}, _area{2 * M_PI} {
	
}

Circle::Circle(float radius) : _radius{1}, _area{2 * M_PI} {
	set_radius(radius);
}

Circle::Circle(const Circle &c) : _radius{c._radius}, _area{c._area} {
	
}

Circle::~Circle() { }

// Cannot have a negative radius
void Circle::set_radius(float radius) {
	if (radius > 0) {
		_radius = radius;
	}
	// Need to update area if radius changes because area depends on radius
	calculate_area();
}

void Circle::calculate_area() {
	_area = 2 * M_PI * radius();
}

float Circle::radius() const {
	return _radius;
}

// Diameter is 2 * radius
float Circle::diameter() const {
	return 2 * radius();
}

float Circle::area() const {
	return _area;
}

Circle &Circle::operator=(const Circle c) {
	_radius = c._radius;
	_area = c._area;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Circle &c) {
	out << c._radius << ' ' << c._area;
	return out;
}
