#include"stack.h"
/**
 * @brief pop stack
 * @details this function return top node data and delete top node of stack
 * @param stack pointer of stack
 * @return -1 stack is empty
 * @return int value of the top node
 */
int stack_pop(stack_t *stack){
    if((stack==NULL )|| (stack->top==NULL)){
        return -1; // stack underflow
    }
    node_t *tmp=stack->top;
    int top=tmp->data; // store top node data to a `top`
    stack->top=tmp->next; //update front
    free(tmp); // deallocate memory
    return top; // return value
}