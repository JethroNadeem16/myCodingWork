#include <stdio.h>
#include "linked_list.h"

/**
PLEASE READ:
	The two main variables you will use are 'a1' and 'b1'.
**/

int main() {
	//** Please don't touch from line 10 to  line 47**/

	// Declaring first linked list
	LinkedList a1 = {4.1f, NULL};
	LinkedList a2 = {2.7f, NULL};
	LinkedList a3 = {5.4f, NULL};
	LinkedList a4 = {8.9f, NULL};
	LinkedList a5 = {3.4f, NULL};

	// Connecting the first linked list
	a1.next = &a2;
	a2.next = &a3;
	a3.next = &a4;
	a4.next = &a5;

	// Declaring second linked list
	LinkedList b1 = {0.6f, NULL};
	LinkedList b2 = {8.2f, NULL};
	LinkedList b3 = {6.4f, NULL};
	LinkedList b4 = {4.6f, NULL};
	LinkedList b5 = {7.3f, NULL};
	LinkedList b6 = {-3.1f, NULL};

	// Connecting the second linked list
	b1.next = &b2;
	b2.next = &b3;
	b3.next = &b4;
	b4.next = &b5;
	b5.next = &b6;

	// Printing first linked list
	printf("First linked list:\n");
	print_forward(&a1);

	// Printing second linked list
	printf("Second linked list:\n");
	print_forward(&b1);
	printf("\n");

	// Printing mean of first linked list
	const float a_mean = linked_mean(&a1);
	printf("Mean of first linked list: %.2f\n", a_mean);

	// Printing mean of second linked list
	const float b_mean = linked_mean(&b1);
	printf("Mean of second linked list: %.2f\n\n", b_mean);

	// Printing total product of first linked list
	const float a_prod = linked_product(&a1);
	printf("Product of first linked list: %.2f\n", a_prod);

	// Printing total product of second linked list
	const float b_prod = linked_product(&b1);
	printf("Product of second linked list: %.2f\n\n", b_prod);

	// Finding the last element of a linked list
	const float a_last = last_link(&a1);
	const float b_last = last_link(&b1);
	printf("Last value for linked lists a and b:\n");
	printf("a_last: %lf, b_last: %lf\n", a_last, b_last);

	// Searching the linked lists for specific values
	int a_good_search_results = linked_search(&a1, 8.9f);
	int a_bad_search_results = linked_search(&a1, 1.11f);
	int b_good_search_results = linked_search(&b1, -3.1f);
	int b_bad_search_results = linked_search(&b1, 4.9f);
	printf("Good search results:\n");
	printf("a: %d, b: %d\n", a_good_search_results, b_good_search_results);

	printf("\nBad search results:\n");
	printf("a: %d, b: %d\n", a_bad_search_results, b_bad_search_results);

	return 0;
}
