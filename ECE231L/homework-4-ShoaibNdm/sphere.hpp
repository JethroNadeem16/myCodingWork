#ifndef DERIVED_SPHERE_HPP
#define DERIVED_SPHERE_HPP

#include <iostream>
#include "circle.hpp"
#include <cmath>

class Sphere: public Circle {
	private:
		float _volume;
		float _surface_area;

		void calculate_surface_area();
		void calculate_volume();

	public:
		Sphere();
		Sphere(float radius);
		Sphere(const Sphere &s);
		~Sphere();

		float volume() const;
		float surface_area() const;

		void set_radius(float _radius) override;
		
		Sphere operator*(float x);
		Sphere &operator=(const Sphere &s);

};

std::ostream &operator<<(std::ostream &out, const Sphere &s);

#endif
