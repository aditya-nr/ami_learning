#include<stdlib.h>
#include<stdio.h>
#include"main.h"
void add_atFront(Node *head){
	// take value from user
	int value;
	printf("Enter value : ");
	scanf("%d",&value);

	if(head==NULL){ // check if list is empty or not
		printf("Linked list id empty, please create a linked list!");
		return ;
	}


	Node *newNode = (Node *)malloc(sizeof(Node)); // dynamically create new node
	if(newNode == NULL){ // check if new node is not created
		printf("No space avilable");
		return;
	}
	
	newNode->next=head; // link head to next of newNode
	head=newNode; // update head
	head->data=value; // put value in head->data
}
