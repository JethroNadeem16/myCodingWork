#include <stdio.h>
#include "edit_linked_list.h"

// Adds new_node after base_node, if base_node->next points to null (meaning
//	that base_node is at the end of the linked list) then 
//	base_node->next->prev is skipped so that we don't trigger a segmentation
//	fault (because we cannot dereference NULL).  
void add_node(DoubleLinkedList *base_node, DoubleLinkedList *new_node) {
	new_node->next = base_node->next;
	new_node->prev = base_node;
	if (base_node->next != NULL) {
		base_node->next->prev = new_node;
	}
	base_node->next = new_node;
}

// Adds new_head before old_head old_head->next does not change because
//	we are adding to the very beginning of the linked list.
void add_at_head(DoubleLinkedList *old_head, DoubleLinkedList *new_head) {
	new_head->prev = NULL;
	new_head->next = old_head;
	old_head->prev = new_head;
}

// Will remove the node after base_node if base_node is not at the end of
//	the linked list (again, we cannot dereference NULL).
void rm_node(DoubleLinkedList *base_node) {
	if (base_node->next != NULL) {
		base_node->next->next->prev = base_node;
		base_node->next = base_node->next->next;
	}
}

// Removes base_node from the rest of the linked list, if it is byitself
//	(meaning prev and next are NULL) it just sets next to NULL.
void rm_at_head(DoubleLinkedList *base_node) {
	if (base_node->next != NULL) {
		base_node->next->prev = NULL;
	}
	base_node->next = NULL;
}
