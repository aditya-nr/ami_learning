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


/**
 * @brief Adds a new node at the end of the linked list.
 * 
 * This function creates a new node with the given value and appends it
 * to the end of the list.
 * 
 * @param list_ptr Pointer to the list where the node will be added.
 * @param value The value to be stored in the new node.
 * @return 1 on success, 0 if memory allocation fails, -1 if the list is invalid.
 * 
 * @details This function allocates memory for a new node and adds it to the 
 * tail of the list. If the list is empty, the new node becomes the head and 
 * tail of the list.
 */
extern int insert_atEnd(list_t *list_ptr, int value);

/**
 * @brief Adds a new node at the front of the linked list.
 * 
 * This function creates a new node with the given value and inserts it 
 * at the front of the list.
 * 
 * @param list_ptr Pointer to the list where the node will be added.
 * @param value The value to be stored in the new node.
 * @return 1 on success, 0 if memory allocation fails, -1 if the list is invalid.
 * 
 * @details This function allocates memory for a new node and adds it to the 
 * head of the list. If the list is empty, the new node becomes both the head 
 * and tail of the list.
 */
extern int insert_atFront(list_t *list_ptr, int value);

/**
 * @brief Prints all the nodes in the linked list.
 * 
 * This function traverses the entire linked list from the head to the tail
 * and prints the value of each node.
 * 
 * @param list The list to be printed.
 * 
 * @details Each node's value is printed in the order it appears in the list.
 * The output is formatted to show the linked list clearly.
 */
extern void print_list(list_t list);

/**
 * @brief Creates a new empty linked list.
 * 
 * This function initializes a new linked list with no nodes.
 * 
 * @return A new empty list.
 * 
 * @details The list created has both head and tail pointers set to NULL, 
 * and its size is initialized to 0.
 */
extern list_t newList();

#endif /* MAIN_H */
