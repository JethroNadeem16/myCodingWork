all: exam_linked_list

exam_linked_list: single_list_functions.o main.o
	gcc $^ -o $@

single_list_functions.o: single_list_functions.c linked_list.h
	gcc -c $< -o $@

main.o: main.c linked_list.h
	gcc -c $< -o $@

clean:
	rm *.o
	rm exam_linked_list
