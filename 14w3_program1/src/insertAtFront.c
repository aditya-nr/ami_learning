#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * @brief Inserts a new node at the front of the linked list.
 * 
 * @details  function creates a new node with the given value and inserts it 
 * at the front of the linked list, updating the head pointer accordingly.
 * 
 * @param list_ptr Pointer to the linked list structure where the node will be added.
 * @param value The value to be stored in the new node.

 */
int insert_atFront(list_t *list_ptr, int value)
{
	// check if list is empty or not
	if (list_ptr == NULL || list_ptr->head == NULL)
	{
		return -1; /// @return -1 list is empty
	}

	list_ptr->size++;
	node_t *newNode = (node_t *)malloc(sizeof(node_t)); // dynamically create new node
	// check if new node is not created
	if (newNode == NULL)
	{
		return 0; /// @return 0 unable to create node
	}

	newNode->next = list_ptr->head; // link head to next of newNode
	list_ptr->head = newNode;		// update head
	list_ptr->head->data = value;	// put value in head->data

	return 1; /// @return 1 insertion completed
}
