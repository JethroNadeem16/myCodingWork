#include <stdio.h>
#include "double_array.h"

int main() {
	darray d1;
	mallocate(&d1, 10);
	int i;
	for(i=0; i<10; i++) {
		set_value(&d1, i, i);
	}
	print_darray(&d1);

	darray d2;
	callocate(&d2, 5);
	print_darray(&d2);

	set_value(&d2, 3, access_value(&d1, 6));
	set_value(&d2, 1, access_value(&d1, 3));
	print_darray(&d2);

	darray d3;
	mallocate(&d3, 15);
	int g;
	for(g = 0; g < d3.size; g++){
		set_value(&d3, g, g);
	}
	print_darray(&d3);

	//set_value(&d3, 13, access_value(&d2, 4));
	//set_value(&d3, 9, access_value(&d2, 2));

	free_darray(&d1);
	free_darray(&d2);
	free_darray(&d3);

	return 0;
}
