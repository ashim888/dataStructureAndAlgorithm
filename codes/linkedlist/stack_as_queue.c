#include <stdio.h> 
#include <stdlib.h> 

struct node{
	int info;
	struct node *next; 
};
typedef struct node NodeType; 
NodeType *rear=0,*front=0; 
// rear=front=0;
void insert(int);
void delete(); 
void display(); 

int main(){
	int choice, item;
	do
	{
	printf("\n1.Insert \n2.Delete \n3.Display\n4:Exit\n"); 
	printf("enter ur choice\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nEnter the data:\n"); 
			scanf("%d",&item); 
			insert(item);
			break;
		case 2:
			delete();
			break; 
		case 3:
			display();
			break; 
		case 4:
			exit(1);
			break; 
		default:
			printf("invalid choice\n");
			break; 
		}
	}while(choice<5);
	return 0;
}
/**************insert function*******************/
void insert(int item) {
NodeType *nnode;
nnode=( NodeType *)malloc(sizeof(NodeType));
if(rear==0) {
	nnode->info=item; 
	nnode->next=NULL; 
	rear=front=nnode;
} 
else {
	nnode->info=item; 
	nnode->next=NULL; 
	rear->next=nnode; 
	rear=nnode;
	} 
}

/******************delete function********************/
void delete() {
	NodeType *temp; 
	if(front==0){
		printf("Queue contain no elements:\n");
		return; 
	}
	else if(front->next==NULL) {
		temp=front;
		rear=front=NULL;
		printf("\nDeleted item is %d\n",temp->info); 
		free(temp);
	} 
	else {
		temp=front;
		front=front->next;
		printf("\nDeleted item is %d\n",temp->info);
		free(temp); 
	}
}
/**************display function***********************/
void display() {
	NodeType *temp; 
	temp=front;
	printf("\nqueue items are:\t"); 
	while(temp!=NULL){
		printf("%d\t",temp->info);
		temp=temp->next; 
	}
}