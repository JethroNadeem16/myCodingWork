all: main.o sq.o custom_handler.o custom_abs_val.o cube_fn.o
	gcc main.o sq.o custom_handler.o custom_abs_val.o cube_fn.o -o test_pointer

main.o: main.c absolute_val.h cube.h handles.h square.h
	gcc main.c -c

sq.o: sq.c square.h
	gcc sq.c -c

custom_handler.o: custom_handler.c handles.h
	gcc custom_handler.c -c

custom_abs_val.o: custom_abs_val.c absolute_val.h
	gcc custom_abs_val.c -c

cube_fn.o: cube_fn.c cube.h
	gcc cube_fn.c -c

clean:
	rm *.o
	rm test_pointer
