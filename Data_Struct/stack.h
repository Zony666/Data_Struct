#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef struct stack {
	int* top;
	int* bottom;
	int maxsize;
	int usage;
}Stack;

Stack* initstack(int maxsize);
int pop_stack(Stack* s);
void printstack(Stack* s);
void push_stack(Stack* s, int data);
bool stack_isempty(Stack* s);
bool stack_isfull(Stack* s);
int stackusing(Stack* s);


