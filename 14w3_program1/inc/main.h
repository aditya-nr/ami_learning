#ifndef MAIN_H
#define MAIN_H

/**
 * @brief Structure representing a node in a linked list.
 * 
 * This structure contains an integer `data` and a pointer `next`
 * to the next node in the list.
 */
typedef struct Node {
    int data;                /**< Data stored in the node. */
    struct Node *next;       /**< Pointer to the next node in the list. */
} node_t;

/**
 * @brief Structure representing a linked list.
 * 
 * This structure holds the head and tail pointers to the linked list,
 * as well as the size of the list (number of nodes).
 */
typedef struct list {
    node_t *head;            /**< Pointer to the first node (head) of the list. */
    node_t *tail;            /**< Pointer to the last node (tail) of the list. */
    int size;                /**< Size of the list (number of nodes). */
} list_t;



extern int insert_atEnd(list_t *list_ptr, int value);


extern int insert_atFront(list_t *list_ptr, int value);


extern void print_list(list_t list);


extern list_t newList();

#endif /* MAIN_H */
