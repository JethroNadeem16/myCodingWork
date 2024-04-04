all: main.o darray.o
	gcc main.o darray.o -o ptr_homework

main.o: main.c double_array.h
	gcc main.c -c

darray.o: darray.c double_array.h
	gcc darray.c -c

clean:
	rm*.o
	rm ptr_homework
