#include<stdlib.h>
#include<stdio.h>
#include"main.h"
void add_atEnd(Node *tail){
	// take value from user
	int value;
	printf("Enter value : ");
	scanf("%d",&value);

	if(tail==NULL){ // check if list is empty or not
		printf("Linked list id empty, please create a linked list!");
		return ;
	}


	tail->next=(Node *)malloc(sizeof(Node)); // dynamically create new node
	if(tail->next == NULL){ // check if new node is not created
		printf("No space avilable");
		return;
	}
	tail=tail->next; // update tail
	tail->data=value; // put value in tail->data
	tail->next=NULL; // put NULL at tail->next
}
