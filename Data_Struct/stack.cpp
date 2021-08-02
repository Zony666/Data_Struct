#include"stack.h"

Stack* initstack(int maxsize)
{
	Stack* s=(Stack*)malloc(sizeof(Stack));
	s->maxsize = maxsize;
	s->usage = 0;
	s->bottom = (int*)malloc(sizeof(int) * (maxsize + 1));
	s->top = s->bottom;
	return s;
}
bool stack_isempty(Stack*s)
{
	if (s->bottom == s->top)
		return true;
	else
		return false;
}
bool stack_isfull(Stack*s)
{
	if (s->top - s->bottom == s->maxsize)
		return true;
	else
		return false;
}
int pop_stack(Stack*s)
{
	if (stack_isempty(s))
		return 404;
	int data = *(s->top);
	*(s->top) = NULL;
	s->usage--;
	s->top--;
	return data;
}

void push_stack(Stack*s,int data)
{
	if (stack_isfull(s))
		return;
	s->top++;
	*(s->top) = data;
	s->usage++;
}
int stackusing(Stack* s)
{
	return s->usage;
}
void printstack(Stack*s)
{
	int* t = s->top;
	printf(" *ջ*\n");
	while (t!=s->bottom)
	{
		printf("| %d |\n", *t);
		t--;
	}
		printf("|___|\n");
}






