#include"tree.h"
/**
 * @brief Inserts a new node with the given value into the binary tree.
 * 
 * @param tree Pointer to the root of the tree.
 * @param value The value to be inserted into the tree.
 */
void insert(tree_t **tree, int value){
    // If tree has no node
    if(*tree == NULL){
        *tree = createTreeNode(value);
        return;
    }

    tree_t *tmp = *tree, *par;
    while(tmp){
        par = tmp;
        if(value < tmp->data)
            tmp = tmp->left;
        else 
            tmp = tmp->right;
    }

    if(par->data < value){
        par->right = createTreeNode(value);
    } else {
        par->left = createTreeNode(value);
    }
}
