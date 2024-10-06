#include <stdio.h>
#include "main.h"
void print_list(Node *head)
{

	if (head == NULL)
	{ // check if list is empty or not
		printf("Linked list id empty, please create a linked list!");
		return;
	}

	printf("Linked List : { ");
	Node *tmp = head;
	while (tmp != NULL)
	{
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	printf(" }\n");
}
