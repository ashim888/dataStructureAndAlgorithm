#include <stdio.h>
#include <stdlib.h>
int value;
typedef struct tree{
	int info;
	struct tree *lchild;
	struct tree *rchild;
}node;
//typedef struct tree node;
node *root;
node *create_tree_node();
node *deletes(node *,int);
node *find_min(node *);
node *NewNode;
void insert(node *,node *);
void inorder(node *);
int search(node *,int value);
//int inserts(node *,int value);
//void delete(node *);

node *deletes(node *root,int item){
	node *temp;
	if (root==NULL){
		printf ("\nEmpty tree");
		return 0;
	}
	else if (item<root->info){
		root->lchild=deletes(root->lchild,item);
	}
	else if (item>root->info){
		root->rchild=deletes(root->rchild,item);
	}
	else if (root->lchild!=NULL&&root->rchild!=NULL){
		temp=find_min(root->rchild);
		root->info=temp->info;
		root->rchild=deletes(root->rchild,root->info);
	}
	else{
		temp=root;
		if (root->lchild==NULL){
			root=root->rchild;
		}
		else if (root->rchild==NULL){
			root=root->lchild;
		}
		printf ("%d",temp->info);
		free(temp);
	}
	return(root);
}

node *find_min(node *root){
	if (root==NULL){
		return 0;
	}
	else if (root->lchild==NULL){
		return root;
	}
	else{
		return(find_min(root->lchild));
	}
}

int main(){
	
	int choice;
	char again = 'N';
	do{
		printf ("\n1)for creating a tree\n2)for traversing in inorder\n3)search element\n4)insert the node\n5)Delete node\n6)EXIT");
		scanf ("%d",&choice);
		switch(choice){
			case 1:
				do{
					NewNode=create_tree_node();
					printf ("\nenter a value for tree node");
					scanf ("%d",&value);
					NewNode->info=value;
					if (root==NULL){
						root=NewNode;
					}
					else{
						insert(root,NewNode);
					}
					printf ("\nDo u want to contiune(y/n)?");
					// fflush(stdin);
					scanf (" %c",&again);
					}while(again=='y');		
				break;
			case 2:
				if (root==NULL){
					printf ("\nNO tree");
				}
				else{
					printf ("\nThe inorder traverse is ");
					inorder(root);
				}
			break;
			case 3:
				if (root==NULL){
					printf("\nno tree created");
				}
				else{
					printf ("\nEnter a value to be searched");
					scanf ("%d",&value);
					int d=search(root,value);
					if (d!=0){
						printf ("\nsearching item donot exist");
					}
				}
				break;
			case 4:
				NewNode=create_tree_node();
				printf ("\nEnter a element to be inserted");
				scanf ("%d",&value);
				NewNode->info=value;
				if (root==NULL){				
					root=NewNode;			
				}
				else{
					insert(root,NewNode);
				}
				break;
			case 5:
				printf ("\nenter a node to delete");
				scanf ("%d",&value);
				printf ("\ndeleted node: %p",deletes(root,value));
				break;
			default:
				exit(1);
			
		}	
	}while(choice!=6);
}
node *create_tree_node(){
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->lchild=NULL;
	temp->rchild=NULL;
	return temp;
	
}
void insert(node *root,node *NewNode){
	if (root->info > NewNode->info){
		if (root->lchild==NULL){
			root->lchild=NewNode;
		}
		else{
			insert(root->lchild,NewNode);
		}
	}
	if (root->info < NewNode->info){
		if (root->rchild==NULL){
			root->rchild=NewNode;
		}
		else{
			insert(root->rchild,NewNode);
		}
	}		
}
void inorder(node *root){
	if (root!=NULL){
		inorder(root->lchild);
		printf ("%d ",root->info);
		inorder(root->rchild);
	}	
}
int search(node *root,int value){
	if (root==NULL){
				return 1;
			}
		
	if (root->info==value){
		
		printf ("\nsearched item is%d ",root->info);
	return 0;
	}
	else if (root->info<value){
			search(root->rchild,value);
			}
	else{
		search(root->lchild,value);
		if (root->rchild==NULL&&root->lchild==NULL){
				return 1;
			}
	}
	return 0;
}


