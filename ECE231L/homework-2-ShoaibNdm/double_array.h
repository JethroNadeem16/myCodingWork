struct _double_array {
	double *data;
	int size;
};

typedef struct _double_array darray;

// Either one of these functions can be called to initialize darray
void mallocate(darray *array, int size);
void callocate(darray *array, int size);

// Since we cannot have user-defined behavior for [], we must use functions
void set_value(darray *array, int index, double value);
double access_value(darray *array, int index);

// Need a function to print the data in our user-defined array
void print_darray(darray *array);

// Since we will dynamically allocate memory for data, we must free it
//	when we are done or at the end of the program.
void free_darray(darray *array);
