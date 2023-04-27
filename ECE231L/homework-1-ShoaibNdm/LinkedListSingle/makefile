all: main.o sll_functions.o
	gcc main.o sll_functions.o -o test_list

main.o: main.c single_linked_list.h
	gcc main.c -c

sll_functions.o: sll_functions.c single_linked_list.h
	gcc sll_functions.c -c

clean:
	rm *.o
	rm test_list
