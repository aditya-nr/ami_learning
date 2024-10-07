#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * @brief Creates a new linked list with user-specified elements.
 * 
 * @details  function initializes a new linked list and allows the user to input 
 * the number of elements to be added. It dynamically allocates memory for each 
 * node and inserts the values into the list either as the first node or by 
 * calling the `insert_atEnd` function for subsequent nodes.
 */
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
			// if this is the first node
			list.head = (node_t *)malloc(sizeof(node_t));
			if (list.head == NULL)
			{
				return list;  /// @return list as is, if memory allocation fails for the first node
			}
			list.head->data = value;
			list.head->next = NULL;
			list.tail = list.head;
			list.size++;
		}
		else
		{
			// insert subsequent nodes at the end
			if (!(insert_atEnd(&list, value) == 1))
			{
				return list;  /// @return list as is, if insertion fails
			}
		}
	}

	return list;  /// @return the newly created list with user input nodes
}
