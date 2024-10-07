#include <stdio.h>
#include "main.h"
void print_list(list_t list)
{

	printf("Linked List : { ");
	while (list.head != list.tail->next)
	{
		printf("%d ", list.head->data);
		list.head = list.head->next;
	}
	printf(" }\n");
}
