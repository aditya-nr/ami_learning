#include <stdlib.h>
#include <stdio.h>
#include "main.h"
list_t newList()
{
	// take count of nodes
	int length;
	printf("Enter Number of Elements : ");
	scanf("%d", &length);

	list_t list;
	list.size = 0;
	int i = 0;
	while (i++ < length)
	{
		// take data for the current node
		printf("Element %d -> ", i);
		int value;
		scanf("%d", &value);

		if (i == 1)
		{
			// if this is first node
			list.head = (node_t *)malloc(sizeof(node_t));
			if (list.head == NULL)
			{
				return list;
			}
			list.head->data = value;
			list.head->next = NULL;
			list.tail = list.head;
			list.size++;
		}
		else
		{
			if (!insert_atEnd(&list, value) == 1)
			{
				return list;
			}
		}
	}

	return list;
}