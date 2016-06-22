####Structure of our Stack
```
#define MAX 10
sruct stack {
	int items[MAX]; //Declaring an array to store items
	int top; //Top of a stack 
}; st;
```

####Creating Empty stack
The value of top=-1 indicates the empty stack in C implementation.
```
/*Function to create an empty stack*/
void create_empty_stack(st *s){
	s->top=-1; 
}
```

####Stack Empty or Underflow:
This is the situation when the stack contains no element. At this point the top of stack is present at the bottom of the stack. In array implementation of stack, conventionally top=-1 indicates the empty.
The following function return 1 if the stack is empty, 0 otherwise.
```
int isempty(st *s) {
	if(s->top==-1) 
		return 1;
	else
		return 0;
}
```
####Stack Full or Overflow:
This is the situation when the stack becomes full, and no more elements can be pushed onto the stack. At this point the stack top is present at the highest location (MAXSIZE- 1) of the stack. The following function returns true (1) if stack is full false (0) otherwise.
```
int isfull(st *s)
{
	if(s->top==MAX-1)
	   return 1;
	else
	   return 0;
}
```
####Algorithm for PUSH (inserting an item into the stack) operation
```
if top=MAXSIZE-1 then
	print “Stack Overflow” and Exit 
else
	Set top=top+1 [Increase top by 1]
	Set Stack[top]:= item [Inserts item in new top position]

SAMPLE:	

void push() {
    int item;
    if(top == MAXSIZE - 1)   //Checking stack overflow
          printf("\n The Stack Is Full");
    else
    {
          printf("Enter the element to be inserted");
          scanf("%d",&item); //reading an item
       } 
   }
```

####Algorithm for POP (removing an item from the stack) operation
```
1.[Check for the stack Underflow] 
If top<0 then
	Print “Stack Underflow” and Exit
else
	[Remove the top element]
	Set item=Stack [top]
	[Decrement top by 1]
	Set top=top-1
	Return the deleted item from the stack
2. Exit

SAMPLE:

void pop() {

	int item;
	if(top <01) //Checking Stack Underflow
		printf("The stack is Empty"); 
	else{
		item = stack[top]; //Storing top element to item variable
		top = top-1; //Decrease top by 1
		printf(“The popped item is=%d”,item); //Displaying the deleted item
	} 
}
```

