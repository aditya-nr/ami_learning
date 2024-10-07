#include"tree.h"
/**
 * @brief Deletes a node with the specified value from the tree.
 * 
 * @param tree Pointer to the root of the tree.
 * @param value The value of the node to be deleted.
 */
void delete(tree_t **tree, int value){
    tree_t *tmp = *tree, *pre, *leftMost;
    if(tmp == NULL) return;

    // Find the node to be deleted and its parent
    while (tmp && (tmp->data != value))
    {
        pre = tmp;
        if(value < tmp->data)
            tmp = tmp->left;
        else
            tmp = tmp->right;
    }

    if(tmp == NULL) return;

    // If the node has a right subtree
    if(tmp->right){
        leftMost = findLeftmostNode(tmp->right);
        leftMost->left = tmp->left;
    } else {
        tmp->right = tmp->left;
    }
    
    // Handle the root node case
    if(pre == NULL){
        *tree = tmp->right;
    }

    // Update the parent's reference
    if(pre->left == tmp){
        pre->left = tmp->right;
    } else {
        pre->right = tmp->right;
    }

    free(tmp);
}