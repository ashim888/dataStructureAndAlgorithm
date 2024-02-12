#include <stdio.h>
#include <stdlib.h>

#define size 3

void enqueue(int item);
void dequeue();
void show();
int front = -1;
int arr[size];
int priority[size];
int largest;
int ans;

int main()
{
    do
    {

        int choice, item;
        printf("1)Enqueue\n2)Dequeue\n3)Show");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the item that you want to enqueue");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;

        default:
            printf("Choose a correct input");
            break;
        }
        printf("Do you want to continue?\t press 0 for yes and 1 for no\n");
        scanf("%d",&ans);
    } while (ans == 0);
}
void enqueue(int item)
{
    if (front == size - 1)
    {
        printf("not enough space\n");
    }
    else
    {
        front++;
        arr[front] = item;
        printf("Enter the priority of it:\n");
        scanf("%d", &priority[front]);
    }
}
void dequeue()
{
    int item;
    if (front == -1)
    {
        printf("there is no element");
    }
    else
    {
        for (int i = 1; i < size; i++)
        {
            if (priority[i] > priority[i - 1])
            {
                if(priority[i]>priority[i+1]){
                    largest=i;
                }
            }
            else if (priority[i]<priority[i-1])
            {
                if(priority[i-1]>priority[i+1]){
                    largest=i-1;
                }
                else{
                    largest=i+1;
                }
            }
            
        }
        front--;
        item=arr[largest];
        printf("The element with the highest priority is %d",item);
        printf("The item %d has been dequeued",item);
        for(int i=0;i<size;i++){
            if(item == arr[i]){
                arr[i]=0;
                priority[i]=0;
            }           
        }
    }
}

void show()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}