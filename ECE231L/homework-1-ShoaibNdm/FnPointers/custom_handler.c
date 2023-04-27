#include "handles.h"

// A function that takes another function and a double as an input. (*hldr)
//	is a pointer to a function that returns a double, and has a double as
//	an input.
double handler(double(*hldr)(double), double x) {
	return hldr(x);
}
