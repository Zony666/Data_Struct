#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;

typedef struct queue {
	datatype* front;
	datatype* rear;
	int maxsize;
	int usage;
}Queue;

void dequeue(Queue* q);
void enqueue(Queue* q, datatype data);
Queue* initqueue(int maxsize);
void printintqueue(Queue* q);
bool queue_isempty(Queue* q);
bool queue_isfull(Queue* q);
int queueusing(Queue* q);

