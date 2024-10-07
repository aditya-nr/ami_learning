#ifndef MAIN_H
#define MAIN_H

typedef struct Node
{
    int data;
    struct Node *next;
} node_t;

typedef struct list
{
    node_t *head, *tail;
    int size;
} list_t;

/**
 * @details add new node at the end of linkedlist
 */
extern int insert_atEnd(list_t *list_ptr, int value);

/**
 * @details add new node at the front of linkedlist
 */
extern int insert_atFront(list_t *list_ptr, int value);

/**
 * @details print all the node of linkedlist
 */
extern void print_list(list_t list);

/**
 * @details create new linked-list
 */
extern list_t newList();

#endif