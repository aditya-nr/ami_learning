#include"tree.h"
/**
 * @brief Performs an in-order traversal of the tree and prints the node values.
 * 
 * @param tree Pointer to the root of the tree.
 */
void inorder_traverse(tree_t *tree){
    if(tree == NULL){
        return;
    }

    inorder_traverse(tree->left);
    printf("%d ", tree->data);
    inorder_traverse(tree->right);
}