#include"queue.h"
/**
 * @brief insert data into queue
 * @details this function inserts data at the end of the queue
 * @param queue pointer of queue
 * @param value value to be inserted
 * @return true push success
 * @return false push fail
 */
bool queue_push(queue_t *queue,int value){
    node_t *node=(node_t*)malloc(sizeof(node_t));
    if(node==NULL){
        return false; // push fail
    }
    node->data=value; // insert data
    node->next=NULL;
    if(queue->back){
        queue->back->next=node; // link to the back of queue
    }else{
        queue->front=node; // if first push to the queue
    }
    queue->back=node; // update back
    return true; // success
}