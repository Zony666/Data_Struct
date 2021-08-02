#include"queue.h"

Queue* initqueue(int maxsize)
{
	Queue* q = (Queue*)malloc(sizeof(Queue));
	q->front = (int*)malloc(sizeof(int)*(maxsize+1));
	q->rear = q->front;
	q->maxsize = maxsize;
	q->usage = 0;
	return q;
}
bool queue_isempty(Queue*q)
{
	if (q->front == q->rear)
		return true;
	else
		return false;
}
bool queue_isfull(Queue*q)
{
	if (q->rear- q->front==q->maxsize)
		return true;
	else
		return false;
}
int queueusing(Queue*q)
{
	return q->usage;
}

void enqueue(Queue* q,int data)
{
	if (queue_isfull(q))
		return;
	q->rear++;
	*(q->rear) = data;
	q->usage++;
}

int dequeue(Queue*q)
{
	if (queue_isempty(q))
		return 404;
	int* t = q->front + 1;
	int* pre = t + 1;
	int data = *t;
	*t = NULL;
	while (pre != q->rear)
	{
		*t = *pre;
		*pre = NULL;
		t++;
		pre++;
	}
	*t = *pre;
	*pre = NULL;
	q->rear = t;
	q->usage--;
	return data;
}

void printqueue(Queue*q)
{
	if (queue_isempty(q))
		return;
	
	int* t = q->front+1;
	while (t!=q->rear)
	{
		printf(" %d < ", *t);
		t++;
	}
	printf("%d \n", *q->rear);
}
