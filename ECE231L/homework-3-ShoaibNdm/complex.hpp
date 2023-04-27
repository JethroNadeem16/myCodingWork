#include <iostream>

class Complex {
	private:
		// Feel free to edit _real, _imag to whatever variable you want
		double _real;
		double _imag;

	public:
		Complex();
		Complex(double real, double imag);
		Complex(const Complex &c);

		// Setter declaration
		void set_real(double r);
		void set_imag(double i);

		// Getter declaration
		double real() const;
		double imag() const;

		void print_polar();
		void print_att();

		Complex mult(const Complex &c);
		Complex div(const Complex &c);
		Complex add(const Complex &c);
		Complex sub(const Complex &c);

		Complex conj() const;

		double mag();
		double phase();

		Complex operator+(const Complex &c);

		Complex operator-(const Complex &c);

		Complex operator*(const Complex &c);

		Complex operator/(const Complex &c);

		Complex &operator=(const Complex &c);

		friend std::ostream &operator<<(std::ostream &out, const Complex &c);
};
