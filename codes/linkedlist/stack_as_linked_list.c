#include <stdio.h> 
#include <stdlib.h> 
// #include <process.h> 
struct node{
	int info;
	struct node *next; 
};
typedef struct node NodeType; 
NodeType *top=0;

void push(int);
void pop(); 
void display(); 
int main()
{
	int choice, item;
	do {
		printf("\n1.Push \n2.Pop \n3.Display\n4:Exit\n"); 
		printf("enter ur choice\n"); 
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("\nEnter the data:\n"); scanf("%d",&item); push(item);
			break;
		case 2:
			pop();
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


/**************push function*******************/
void push(int item) {
	NodeType *nnode;
	int data;
	nnode=( NodeType *)malloc(sizeof(NodeType)); 
	if(top==0){
		nnode->info=item;
		nnode->next=NULL; 
		top=nnode;
	} 
	else {
		nnode->info=item; 
		nnode->next=top; 
		top=nnode;
	} 
}


/******************pop function********************/ 
void pop()
{
	NodeType *temp;
	if(top==0) {
		printf("Stack contain no elements:\n"); return;
	} 
	else {
		temp=top;
		top=top->next;
		printf("\ndeleted item is %d\t",temp->info); free(temp);
	} 
}

/**************display function***********************/ 
void display()
{
	NodeType *temp;
	if(top==0) {
		printf("Stack is empty\n");
		return; 
	}
	else {
		temp=top;
		printf("Stack items are:\n"); 
		while(temp!=0){
			printf("%d\t",temp->info);
			temp=temp->next;
			}
		}
}

