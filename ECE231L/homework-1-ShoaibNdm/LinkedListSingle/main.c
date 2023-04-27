#include <stdio.h>
#include "single_linked_list.h"

int main() {
	SingleLinkedList l2 = {3, NULL};
	SingleLinkedList l1 = {1, &l2};

	// Expect 1 3
	print_list(&l1);

	SingleLinkedList l3 = {2, NULL};

	add_node(&l1, &l3);
	// Expect 1 2 3
	print_list(&l1);

	SingleLinkedList l4 = {5, NULL};

	add_node(&l2, &l4);
	// Expect 1 2 3 5
	print_list(&l1);

	rm_node(&l4);
	rm_node(&l3);
	// Expect 1 2 5
	print_list(&l1);

	return 0;
}
