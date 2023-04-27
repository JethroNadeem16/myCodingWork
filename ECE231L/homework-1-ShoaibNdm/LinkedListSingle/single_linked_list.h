#include <stdio.h>

struct _single_linked_list {
	int value;
	struct _single_linked_list *next;
};

typedef struct _single_linked_list SingleLinkedList;

void print_list(SingleLinkedList *node);
void add_node(SingleLinkedList *base_node, SingleLinkedList *new_node);
void rm_node(SingleLinkedList *base_node);
