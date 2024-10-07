#include"queue.h"
/**
 * @brief check weather queue is empty or not
 * @param queue queue
 * @return true queue is empty
 * @return false queue is not empty
 */

bool isQueueEmpty(queue_t queue){
    if(queue.front==NULL){
        return true;
    }else{
        return false;
    }
}