all: main.o ell.o pll.o
	gcc main.o ell.o pll.o -o run_list_run

main.o: main.c double_linked_list.h edit_linked_list.h print_linked_list.h
	gcc main.c -c

ell.o: ell.c edit_linked_list.h
	gcc ell.c -c

pll.o: pll.c print_linked_list.h
	gcc pll.c -c

clean:
	rm *.o
	rm run_list_run
