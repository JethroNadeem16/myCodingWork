#pragma once
#include <stdio.h>

struct _double_linked_list {
	struct _double_linked_list *prev;
	int value;
	struct _double_linked_list *next;
};

typedef struct _double_linked_list DoubleLinkedList;
