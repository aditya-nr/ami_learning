#include"tree.h"
/**
 * @brief Creates a new tree node with the given value.
 * 
 * @param value The value to be stored in the new node.
 * @return tree_t* Pointer to the newly created node.
 */
tree_t * createTreeNode(int value){
    tree_t *tmp=(tree_t *)malloc(sizeof(tree_t));
    tmp->data=value;
    tmp->left=NULL;
    tmp->right=NULL;
    return tmp;
}