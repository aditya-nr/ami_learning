#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * \brief helo
 */
int insert_atEnd(list_t *list_ptr, int value)
{
	// check if list is empty or not
	if (list_ptr == NULL || list_ptr->head == NULL)
	{
		return -1; /// @return -1 list is empty
	}

	list_ptr->size++;
	list_ptr->tail->next = (node_t *)malloc(sizeof(node_t)); // dynamically create new node

	// check if new node is not created
	if (list_ptr->tail->next == NULL)
	{
		return 0; /// @return 0 unable to create node
	}

	list_ptr->tail = list_ptr->tail->next; // update tail
	list_ptr->tail->data = value;		   // put value in tail->data
	list_ptr->tail->next = NULL;		   // put NULL at tail->next

	return 1; /// @return 1 insertion completed
}
