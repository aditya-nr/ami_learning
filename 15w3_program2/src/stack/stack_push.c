#include"stack.h"
/**
 * @brief insert data into stack
 * @details this function inserts data at the top of stack
 * @param stack pointer of stack
 * @param value value to be inserted
 * @return true push success
 * @return false push fail
 */
bool stack_push(stack_t *stack,int value){
    node_t *node=(node_t*)malloc(sizeof(node_t));
    if(node==NULL){
        return false; // push fail
    }
    node->data=value; // insert data
    node->next=stack->top; // link to the front of stack
    stack->top=node; // update top
    return true; // success
}