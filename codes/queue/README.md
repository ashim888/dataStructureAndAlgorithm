####Algorithm for insertion an item in queue
```
1. Initialize front=0 and rear=-1 
	if rear>=MAXSIZE-1
		print “queue overflow” and return 
	else
	set rear=rear+1 
	queue[rear]=item
2. end
```
####Algorithm to delete an element from the queue
```
if rear < front
	print "queue is empty" return
else 
	item=queue[front++]
end
```

####Declaration of a Queue
```
# define MAXQUEUE 50 /* size of the queue items*/
struct queue {
	int front;
	int rear;
	int items[MAXQUEUE];
}qt;
```
####The MakeEmpty function
```
void makeEmpty(qt *q)
{
	q->rear=-1;
	q->front=0; 
}
```
####The IsEmpty function
```
int IsEmpty(qt *q)
{
	if(q->rear < q->front)
		return 1; 
	else
		return 0;
}
```
####The Isfull function
```
int IsFull(qt *q)
{
	if(q->rear==MAXQUEUEZIZE-1)
		return 1; 
	else
		return 0;
}
```
####The Enqueue function
```
void Enqueue(qt *q, int newitem) {
	if(IsFull(q)) {
		printf(“queue is full”);
		exit(1); 
	}
	else {
	q->items[q->rear]=newitem; 
	}
}
```
####The Dequeue function
```
int Dequeue(qt *q)
{
	if(IsEmpty(q))
	{
		printf(“queue is Empty”);
		exit(1); 
	}
	else {
		q->front++; 
	}
}
```