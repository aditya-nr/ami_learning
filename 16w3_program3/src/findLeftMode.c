#include"tree.h"
/**
 * @brief Finds and returns the leftmost node (minimum value) in the tree.
 * 
 * @param tree Pointer to the root of the tree.
 * @return tree_t* Pointer to the leftmost node in the tree.
 */
tree_t* findLeftmostNode(tree_t *tree){
    while(tree && tree->left){
        tree = tree->left;
    }
    
    return tree;
}