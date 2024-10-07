#ifndef TREE_H
#define TREE_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdint.h>

/**
 * @brief Structure representing a binary tree node.
 */
typedef struct tree
{
    int data;               ///< Data stored in the node.
    struct tree *left, *right; ///< Pointers to the left and right child nodes.
} tree_t;

extern tree_t * createTreeNode(int value);
extern void insert(tree_t **tree, int value);
extern void inorder_traverse(tree_t *tree);
extern tree_t* findLeftmostNode(tree_t *tree);
extern void delete(tree_t **tree, int value);
extern tree_t* search(tree_t *tree, int value);

#endif