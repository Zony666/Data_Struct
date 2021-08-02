#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef struct linklist_node {
	int data;
	struct linklist_node* next;
}NODE;

typedef struct Linklist {
	NODE* phead;
}Linklist;

Linklist* initlinklist();
NODE* creatnode(int data, NODE* next);
bool DeleteNode_data(Linklist* l, int d_data);
void InsertNode_tail(Linklist* l, int data);
bool linklist_isempty(Linklist* l);
void printlinklist(Linklist* l);

