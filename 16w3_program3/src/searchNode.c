#include"tree.h"

/**
 * @brief Searches for a node with the specified value in the tree.
 * 
 * @param tree Pointer to the root of the tree.
 * @param value The value to search for.
 * @return tree_t* Pointer to the node if found, NULL if not found.
 */
tree_t* search(tree_t *tree, int value){
    while (tree && (tree->data != value))
    {
        if(value < tree->data)
            tree = tree->left;
        else
            tree = tree->right; 
    }

    if(tree == NULL) return NULL;
    return tree;
}