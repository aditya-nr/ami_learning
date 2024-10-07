#include"queue.h"
/**
 * @brief pop queue
 * @details this function return the front node data and delete the front node 
 * @param queue pointer of queue
 * @return -1 queue is empty
 * @return int value of the front node
 */
int queue_pop(queue_t *queue){
    if(queue==NULL || (queue->front==NULL)){
        return -1; // 
    }
    node_t *tmp=queue->front;
    int front=tmp->data; // store front node data to a `front`
    //update front
    if(queue->front==queue->back){
        queue->front=NULL;
        queue->back=NULL;
    }else{
        queue->front=tmp->next; 
    }
    free(tmp); // deallocate memory
    return front; // return value
}