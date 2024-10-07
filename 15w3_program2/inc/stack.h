#ifndef STACK_H
#define STACK_H

#include"list.h"
/**
 * @brief stucture representing node of a stack
 */

typedef struct stack
{
    node_t *top; ///< pointer to the top of the stack node 
} stack_t;

extern bool stack_push(stack_t *stack,int value);
extern int stack_pop(stack_t *stack);
extern bool isStackEmpty(stack_t stack);
#endif
