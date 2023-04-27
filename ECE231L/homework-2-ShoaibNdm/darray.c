#include <stdio.h>
#include <stdlib.h>
#include "double_array.h"

void mallocate(darray *array, int size){
	array->data = (double *) malloc(size * sizeof(double));
	array->size = size;
}

void callocate(darray *array, int size){
	array->data = (double *) calloc(size, sizeof(double));
	array->size = size;
}

double access_value(darray *array, int index){
	if(index > array->size){
		printf("Index is out of bounds");
		return -1;
	}
	return array->data[index];
}

void set_value(darray *array, int index, double value){
	if(index > array->size){
		return;
	}
	array->data[index] = value;
}

void print_darray(darray *array){
	int i2 = 0;
	for(i2 = 0; i2 < array->size; i2++){
		printf("%.3lf ", array->data[i2]);
	}
}

void free_darray(darray *array){
	free(array->data);	
}
