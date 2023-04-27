#include "print_linked_list.h"

// Points to the input and prints the rest of the linked list data until
//	it reaches NULL, the linked list is traversed via next, making it
//	"print forwards".
void print_forward(DoubleLinkedList *node) {
	DoubleLinkedList *temp;
	for(temp = node; temp != NULL; temp = temp->next) {
		printf("%d ", temp->value);
	}
	printf("\n");
}

// Points to the input and prints the rest of the linked list data until
//	it reaches NULL, the linked list is traversed via prev, making it
//	"print backards".
void print_backward(DoubleLinkedList *node) {
	DoubleLinkedList *temp;
	for(temp = node; temp != NULL; temp = temp->prev) {
		printf("%d ", temp->value);
	}
	printf("\n");
}
