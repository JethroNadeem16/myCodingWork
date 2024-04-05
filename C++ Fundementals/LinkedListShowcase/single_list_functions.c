#include <stdio.h>
#include "linked_list.h"

// Points to the input and prints the rest of the linked list data until
//	it reaches NULL, the linked list is traversed via next, making it
//	"print forward".
void print_forward(LinkedList *node) {
	LinkedList *temp;
	for(temp = node; temp != NULL; temp = temp->next) {
		printf("%.2f ", temp->value);
	}
	printf("\n");
}

// Adds new_node after base_node, if base_node points to NULL get return
//	to avoid a segmentation fault.
void add_node(LinkedList *base_node, LinkedList *new_node) {
	if (base_node == NULL) {
		return;
	}
	new_node->next = base_node->next;
	base_node->next = new_node;
}

// Adds new_head before old_head, old_head->next does not change because
//	we are adding to the very beginning of the linked list.
void add_at_head(LinkedList *old_head, LinkedList *new_head) {
	if (old_head == NULL) {
		return;
	}
	new_head->next = old_head;
}

// Will remove the node after base_node only if base_node is not at the 
//	end of the linked list (again, we cannot dereference NULL).
void rm_node(LinkedList *base_node) {
	if ((base_node == NULL) || (base_node->next == NULL)) {
			return;
	}
	base_node->next = base_node->next->next;
}

// Removes base_node from the rest of the linked list, if it is by itself
//	(meaning next is NULL) it just sets next to NULL.
void rm_at_head(LinkedList *base_node) {
	if (base_node == NULL) {
		return;
	}
	base_node->next = NULL;
}

float linked_sum(LinkedList *root_node) {
	LinkedList *temp;
	float sum = 0.0f;
	for (temp=root_node; temp!=NULL; temp=temp->next) {
		sum += temp->value;
	}
	return sum;
}

float linked_mean(LinkedList *root_node) {
	LinkedList *temp;
	float mean = 0.0f;
	int count = 0;
	for (temp = root_node; temp != NULL; temp = temp->next) {
		if(temp != NULL){
			count++;
			//temp = temp->next;
		}
		mean += temp->value;
	}
	mean /= count;

	return mean;
}

float linked_product(LinkedList *root_node) {
	LinkedList *temp;
	float product = 1.0f;
	for (temp = root_node; temp != NULL; temp = temp->next) {
		product *= temp->value;
	}

	return product;
}

float last_link(LinkedList *root_node) {
	LinkedList *temp;
	float last;
	for (temp = root_node; temp != NULL; temp = temp->next){
		if (temp->next == NULL){
			last = temp->value;
		}
	}

	return last;
}

int linked_search(LinkedList *root_node, float search_value) {
	LinkedList *temp;
	for (temp = root_node; temp != NULL; temp = temp->next) {
		if (search_value != temp->value) {
			search_value = 1;
		}else {
			search_value = -1;
		}
	}	

	return search_value;
}
