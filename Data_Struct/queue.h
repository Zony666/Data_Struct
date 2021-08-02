#pragma once
#include<stdio.h>
#include<stdlib.h>



typedef struct queue {
	int* front;
	int* rear;
	int maxsize;
	int usage;
}Queue;

int dequeue(Queue* q);
void enqueue(Queue* q, int data);
Queue* initqueue(int maxsize);
void printqueue(Queue* q);
bool queue_isempty(Queue* q);
bool queue_isfull(Queue* q);
int queueusing(Queue* q);

