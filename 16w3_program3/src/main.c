#include"tree.h"
int main()
{
    tree_t *tree=NULL,*tmp_ptr; ///< tree variable for tree data structure

    int choice, tmp;
    while (1)
    {
        printf("\n**********************************");
        printf("\n1 > insert node");
        printf("\n2 > print tree (inorder)");
        printf("\n3 > delete node");
        printf("\n4 > search node");
        printf("\n5 > Exit");
        printf("\nEnter option : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // insert node
            printf("Enter data : ");
            scanf("%d", &tmp);
            insert(&tree,tmp);
            break;

        case 2: // print tree
            inorder_traverse(tree);
            break; 

        case 3: //delete node
            printf("Enter data : ");
            scanf("%d", &tmp);
            delete(&tree,tmp);
            break;
        case 4: // search node
            printf("Enter data : ");
            scanf("%d", &tmp);
            tmp_ptr= search(tree,tmp);
            if(tmp_ptr==NULL){
                printf("No element found");
            }else{
                printf("Node address : %p",tmp_ptr);
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


