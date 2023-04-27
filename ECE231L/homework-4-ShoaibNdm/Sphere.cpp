#include "sphere.hpp"
#include <cmath>

Sphere::Sphere() : Circle() { 
	calculate_surface_area();
	calculate_volume();
}

Sphere::Sphere(float radius) : Circle(radius) {
	calculate_surface_area();
	calculate_volume();
}

Sphere::Sphere(const Sphere &s) : Circle(s), _surface_area{s._surface_area}, _volume{s._volume} {}

float Sphere::surface_area() const {
	return _surface_area;
}

float Sphere::volume() const {
	return _volume;
}

void Sphere::set_radius(float radius) {
	Circle::set_radius(radius);
	calculate_surface_area();
	calculate_volume();
}

void Sphere::calculate_surface_area() {
	_surface_area = 4 * M_PI * (_radius * _radius);
}

void Sphere::calculate_volume() {
	_volume = (4/3.0) * M_PI * (_radius * _radius * _radius);
}

Sphere::~Sphere() {}

Sphere Sphere::operator*(float x) {
	Sphere r(_radius*x);
	return r;
}

Sphere &Sphere::operator=(const Sphere &s) {
	if (this == &s) {
		return *this;
	}

	_radius = s._radius;
	_surface_area = s._surface_area;
	_volume = s._volume;
	_area = s._area;

	return *this;
}

std::ostream &operator<<(std::ostream &out, const Sphere &s) {
	out << s.radius() << ' ' << s.area() << ' ' << s.surface_area() << ' ' << s.volume();
	return out;
}
