#include <iostream>
#include "complex.hpp"
#include <cmath>

Complex::Complex(){
	_real = 0;
	_imag = 0;
}

Complex::Complex(double real, double imag){
	_real = real;
	_imag = imag;
}

Complex::Complex(const Complex &c){
	_real = c._real;
	_imag = c._imag;
}

void Complex::set_real(double r){
	_real = r;
}

void Complex::set_imag(double i){
	_imag = i;
}

double Complex::real()const{
	return _real;
}

double Complex::imag()const{
	return _imag;
}

void Complex::print_polar(){
	std::cout << mag() << "," << phase() << std::endl;
}

void Complex::print_att(){
	if(_imag >= 0){
		std::cout << _real << " + " << _imag << "j" << std::endl;
	}else{
		std::cout << _imag << " - " << _imag << "j" << std::endl;
	}
}

Complex Complex::mult(const Complex &c){
	Complex cv((_real * c._real) - (_imag * c._imag), (_real * c._imag) + (_imag * c._real));
	return cv;
}

Complex Complex::div(const Complex &c){
	Complex numr = mult(c.conj());
	double denm = ((c._real * c._real) + (c._imag * c._imag));
	Complex cv((numr._real / denm), (numr._imag / denm));
	return cv;
}

Complex Complex::add(const Complex &c){
	Complex cv(_real + c._real, _imag + c._imag);
	return cv;
}

Complex Complex::sub(const Complex &c){
	Complex cv(_real - c._real, _imag - c._imag);
	return cv;
}

Complex Complex::conj()const{
	Complex cv(_real, -_imag);
	return cv;
}

double Complex::mag(){
	return sqrt((_real * _real) + (_imag * _imag));
}

double Complex::phase(){
	double phase = atan(_imag / _real);
	return phase * (180.0 / M_PI);
}

Complex Complex::operator+(const Complex &c){
	return add(c);
}

Complex Complex::operator-(const Complex &c){
	return sub(c);
}

Complex Complex::operator*(const Complex &c){
	return mult(c);
}

Complex Complex::operator/(const Complex &c){
	return div(c);
}

Complex &Complex::operator=(const Complex &c){
	if (this == &c){
		return *this;
	}
	_real = c._real;
	_imag = c._imag;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Complex &c){
	if(c._imag >= 0){
		out << c.real() << " + " << c.imag() << " j ";
	}else{
		out << c.real() << " - " << -c.imag() << " j ";
	}
	return out;
}
