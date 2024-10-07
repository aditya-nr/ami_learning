#include"stack.h"
/**
 * @brief check weather stack is empty or not
 * @param stack stack
 * @return true stack is empty
 * @return false stack is not empty
 */

bool isStackEmpty(stack_t stack){
    if(stack.top==NULL){
        return true;
    }else{
        return false;
    }
}