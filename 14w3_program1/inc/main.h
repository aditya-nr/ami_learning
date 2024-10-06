#ifndef MAIN_H
#define MAIN_H

/**
 * @details structure of LinkedList Node
 */
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

/**
 * @details add new node at the end of linkedlist
 */
extern void add_atEnd(Node *tail);

/**
 * @details add new node at the front of linkedlist
 */
extern void add_atFront(Node *head);

/**
 * @details print all the node of linkedlist
 */
extern void print_list(Node *head);

/**
 * @details create new linked-list
 */
extern Node *new_list();

#endif