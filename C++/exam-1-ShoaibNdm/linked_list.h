#include <stdio.h>

struct _single_linked_list {
	float value;
	struct _single_linked_list *next;
};

typedef struct _single_linked_list LinkedList;

void print_forward(LinkedList *node);

void add_node(LinkedList *base_node, LinkedList *new_node);
void add_at_head(LinkedList *old_node, LinkedList *new_head);

void rm_node(LinkedList *base_node);
void rm_at_head(LinkedList *base_node);

float linked_sum(LinkedList *root_node);

// Functions to complete
float linked_mean(LinkedList *root_node);
float linked_product(LinkedList *root_node);
float last_link(LinkedList *root_node);
int linked_search(LinkedList *root_node, float search_value);
