#include"stack.h"
#include"queue.h"
#include<stdio.h>
/**
 * 
 * @details  program allows the user to create a stack/queue, push/pop operation on queue/stack,
 * check if queue/stack is empty or not. The user is prompted to choose these options from a menu.
 * 
 * @return 0 upon successful execution.
 */
int main()
{
    stack_t stack; ///< stack variable for stack data structure
    queue_t queue; ///< queue variable for stack data structure
    
    //intilize default value of stack/queue
    stack.top=NULL; 
    queue.front=NULL;
    queue.back=NULL;

    int choice, tmp;
    bool isSuccess;
    while (1)
    {
        printf("\n**********************************");
        printf("\n1 > push (stack)");
        printf("\n2 > pop (stack)");
        printf("\n3 > check empty (stack)");
        printf("\n4 > push (queue)");
        printf("\n5 > pop (queue)");
        printf("\n6 > check empty (queue)");
        printf("\n7 > Exit");
        printf("\nEnter option : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // push stack
            printf("Enter data : ");
            scanf("%d", &tmp);
            isSuccess=stack_push(&stack,tmp);
            if(isSuccess==true){
                printf("Push operation successfull !");
            }else{
                printf("Push operation failed !");
            }
            
            break;

        case 2: // pop stack
            tmp=stack_pop(&stack);
            if(tmp!=-1){
                printf("Pop operation successfull !\n");
                printf("Deleted value : %d",tmp);
            }else{
                printf("Pop operation failed !");
            }
            
            break;   
        case 3: // check stack
            if(isStackEmpty(stack)==true){
                printf("Stack is empty");
            }else{
                printf("Stack is not empty");
            }
            break;
        case 4: // push queue
            printf("Enter data : ");
            scanf("%d", &tmp);
            isSuccess=queue_push(&queue,tmp);
            if(isSuccess==true){
                printf("Push operation successfull !");
            }else{
                printf("Push operation failed !");
            }
            
            break; 
        case 5: // pop queue
            tmp=queue_pop(&queue);
            if(tmp!=-1){
                printf("Pop operation successfull !\n");
                printf("Deleted value : %d",tmp);
            }else{
                printf("Pop operation failed !");
            }
            
            break;   

        case 6: // check queue
            if(isQueueEmpty(queue)==true){
                printf("Queue is empty");
            }else{
                printf("Queue is not empty");
            }
            break;
        case 7:
            return 0;
        default:
            printf("Incorrect option!");
            break;
        }
    }

    return 0;
}
