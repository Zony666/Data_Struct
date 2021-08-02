#include"linklist.h"
#include "stack.h"
#include"queue.h"

void linklist_test()
{
	Linklist* l = initlinklist();
	InsertNode_tail(l,10);
	InsertNode_tail(l, 11);
	InsertNode_tail(l, 12);
	InsertNode_tail(l, 13);
	InsertNode_tail(l, 14);

	printlinklist(l);
	DeleteNode_data(l, 10);
	printlinklist(l);
	DeleteNode_data(l,12);
	printlinklist(l);
	DeleteNode_data(l,14);
	printlinklist(l);
}
void teststack()
{
	Stack* s = initstack(6);
	push_stack(s,1);
	push_stack(s, 2);
	push_stack(s, 3);
	push_stack(s, 4);
	push_stack(s, 5);
	printstack(s);
	int a= pop_stack(s);
	printstack(s);
	printf("弹出数据：%d\n", a);
	a=pop_stack(s);
	printstack(s);
	printf("弹出数据：%d\n", a);
	a=pop_stack(s);
	printstack(s);
	printf("弹出数据：%d\n", a);
	a = pop_stack(s);
	printstack(s);
	printf("弹出数据：%d\n", a);
	a = pop_stack(s);
	printstack(s);
	printf("弹出数据：%d\n", a);
	a = pop_stack(s);
	printstack(s);
	printf("弹出数据：%d\n", a);
	a = pop_stack(s);
	printstack(s);
	printf("弹出数据：%d\n", a);
}

void queuetest()
{
	Queue* q = initqueue(6);
	enqueue(q, 1);
	enqueue(q,2);
	enqueue(q, 3);
	enqueue(q, 4);
	enqueue(q, 5);
	enqueue(q, 6);
	printqueue(q);
	dequeue(q);
	printqueue(q);
	enqueue(q,7);
	printqueue(q);
	printf("%d", queueusing(q));
}

int main()
{
	
	queuetest();

	return 0;
}
