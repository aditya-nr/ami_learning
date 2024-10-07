#ifndef LIST_H
#define LIST_H

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
/**
 * @brief structure representing node of a linked list
 */
typedef struct node
{
    int data; ///< Data stored in the node
    struct node *next; ///< pointer to the next node in the list
}node_t;

#endif