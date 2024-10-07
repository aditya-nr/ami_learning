#ifndef QUEUE_H
#define QUEUE_H

#include"list.h"
/**
 * @brief stucture representing node of a queue
 */

typedef struct queue
{
    node_t *front; ///< pointer to the front node of queue
    node_t *back; ///< pointer to the last node of queue
} queue_t;

extern bool queue_push(queue_t *queue,int value);
extern int queue_pop(queue_t *queue);
extern bool isQueueEmpty(queue_t queue);
#endif