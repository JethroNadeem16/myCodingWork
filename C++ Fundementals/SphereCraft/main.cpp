#include <iostream>
#include "circle.hpp"
#include "sphere.hpp"

int main() {
	Circle c1, c2(2);
	std::cout << c1 << ' ' << c2 << '\n';

	c1.set_radius(3);
	std::cout << c1 << '\n';

	Circle c3 = c1;
	c3.set_radius(7);
	std::cout << c3 << '\n';

	Sphere s1, s2(2);
	Sphere s3 = s1;
	s3.set_radius(5);

	s2 = s2 * 2;
	std::cout << s1 << '\n' << s2 << '\n' << s3 << '\n';

	return 0;
}
