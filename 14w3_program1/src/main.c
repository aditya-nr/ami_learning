#include <stdio.h>
#include "main.h"
/**
 * @brief Main function to manage a linked list through user input.
 * 
 * @details  program allows the user to create a new list, insert elements at 
 * the front or end of the list, and print the entire list. The user is
 * prompted to choose these options from a menu.
 * 
 * @return 0 upon successful execution.

 */
int main()
{
    list_t list;
    list.size = 0;
    int choice, tmp;
    while (1)
    {
        printf("\n**********************************");
        printf("\n1 > create new list");
        printf("\n2 > insert new element at end of list");
        printf("\n3 > insert new element at start of list");
        printf("\n4 > print list");
        printf("\n5 > Exit");
        printf("\nEnter option : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (list.size == 0)
            {
                list = newList();
            }
            else
            {
                printf("List is already created !");
            }
            break;
        case 2:
            if (list.size > 0)
            {
                printf("Enter data : ");
                scanf("%d", &tmp);
                insert_atEnd(&list, tmp);
            }
            else
            {
                printf("No list avilable !");
            }
            break;
        case 3:
            if (list.size > 0)
            {
                printf("Enter data : ");
                scanf("%d", &tmp);
                insert_atFront(&list, tmp);
            }
            else
            {
                printf("No list avilable !");
            }
            break;
        case 4:
            if (list.size > 0)
            {
                print_list(list);
            }
            else
            {
                printf("No list avilable !");
            }
            break;
        case 5:
            return 0;
        default:
            printf("Incorrect option!");
            break;
        }
    }

    return 0;
}