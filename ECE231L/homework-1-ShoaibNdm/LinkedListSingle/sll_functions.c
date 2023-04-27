#include <stdio.h>
#include "single_linked_list.h"

// Takes a pointer to a linked list node, will print until it reaches NULL
void print_list(SingleLinkedList *node) {
	SingleLinkedList *temp;
	for(temp = node; temp != NULL; temp = temp->next) {
		printf("%d ", temp->value);
	}
	printf("\n");
}

// Will add new_node after base_node, so base_node will point to new_node
void add_node(SingleLinkedList *base_node, SingleLinkedList *new_node) {
	new_node->next = base_node->next;
	base_node->next = new_node;
}

// Removes the linked list node after base_node, if it is at the end of the
//	list, nothing is done.
void rm_node(SingleLinkedList *base_node) {
	if (base_node->next != NULL) {
		base_node->next = base_node->next->next;
	}
}
