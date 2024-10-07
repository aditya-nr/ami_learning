#include <stdio.h>
#include "main.h"

/**
 * @brief Prints the contents of the linked list.
 * 
 * @details  function traverses the linked list from the head to the tail and 
 * prints the value of each node, displaying the list in a simple format.
 * 
 * @param list The linked list to be printed.
 */
void print_list(list_t list)
{
    printf("Linked List : { ");
    while (list.head != list.tail->next)
    {
        printf("%d ", list.head->data); // print the current node's data
        list.head = list.head->next;    // move to the next node
    }
    printf(" }\n"); // close the list representation
}

