#include <stdlib.h>
#include <stdio.h>
#include "main.h"
void newList(Node *head, Node *tail)
{
	// take value from user
	int length;
	printf("Enter Number of Elements : ");
	scanf("%d", &length);

	int i = 0, tmp;
	Node *head = NULL, *tail = NULL;
	while (i++ < length)
	{
		printf("Element %d -> ", i);
		if (i == 1)
		{
			head = (Node *)malloc(sizeof(Node));
			tail = head;
			add_atEnd(tail);
			free(head);
			head = tail;
		}
		else
		{
			add_atEnd(tail);
		}
	}
}