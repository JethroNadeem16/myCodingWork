#include <stdio.h>
#include "square.h"
#include "cube.h"
#include "absolute_val.h"
#include "handles.h"

int main() {
	int i;
	double k = -6.1;
	// fns is an array of function pointers. The functions that fns can
	//	point to are functions that return a double and take a double as an
	//	input.
	double (*fns[3])(double) = {square, cube, custom_abs};

	for(i = 0; i < 3; i++) {
		printf("%.3lf\n", handler(fns[i], k));
	}

	return 0;
}
