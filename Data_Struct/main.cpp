#include"linklist.h"
#include "stack.h"
#include"queue.h"
#include"bintree.h"
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
void bintreetest()
{
	/*
			构建的二叉树：
			  root0
			 /    \
			a1     b2
		   /      / \
	      c3     d4  e5
		  \
		   f6
	*/

	Bitree* tree = initbtree(0);
	btNode* a1 = creatbtnode(1);
	btNode* b2 = creatbtnode(2);
	btNode* c3 = creatbtnode(3);	
	btNode* d4 = creatbtnode(4);									
	btNode* e5 = creatbtnode(5);
	btNode* f6 = creatbtnode(6);
	leftconnect(tree->root,a1);
	rightconnect(tree->root, b2);
	leftconnect(a1,c3);
	leftconnect(b2,d4);
	rightconnect(b2,e5);
	rightconnect(c3, f6);
	printf("先序：");
	PreorderTraversal(tree->root);
	printf("\n中序：");
	MidorderTraversal(tree->root);
	printf("\n后序：");
	PostorderTraversal(tree->root);
}
int main()
{
	
	bintreetest();

	return 0;
}
