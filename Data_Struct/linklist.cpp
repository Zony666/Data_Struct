#include"linklist.h"

Linklist* initlinklist()
{
	Linklist* l = (Linklist*)malloc(sizeof(Linklist));
	l->phead = NULL;
	return l;
}
NODE* creatnode(int data,NODE*next)
{
	NODE* nd = (NODE*)malloc(sizeof(NODE));
	nd->data = data;
	nd->next = next;
	return nd;
}
bool linklist_isempty(Linklist* l)
{
	if (l->phead == NULL)
		return true;
	else
		return false;
}
void InsertNode_tail(Linklist*l,int data)
{
	if (linklist_isempty(l))
	{
		l->phead = creatnode(data,NULL);
		return;
	}
	NODE* t = l->phead;
	while (t->next)
		t = t->next;
	t->next = creatnode(data,NULL);
}

bool DeleteNode_data(Linklist* l, int d_data)
{
	if (linklist_isempty(l))
		return false;

	NODE* pre = l->phead->next;
	NODE* t = l->phead;
	if (t->data == d_data)
	{
			l->phead =pre;
			free(t);
			return true;
	}
	if (pre->data == d_data)
	{
		t->next = pre->next;
		free(pre);
		return true;
	}
	while (pre->next && pre->data != d_data)
	{
		pre = pre->next;
		t = t->next;
	}
	if (pre->next == NULL)
	{
		if (pre->data == d_data)
		{
			t->next = pre->next;
			free(pre);
			return true;
		}
		else 
			return false;
	}
	t->next = pre->next;
	free(pre);
	return true;
}

void printlinklist(Linklist*l)
{
	if (linklist_isempty(l))
		return;
	NODE* t = l->phead;
	while (t)
	{
		printf("%d->", t->data);
		t = t->next;
	}
	printf("\n");
}









