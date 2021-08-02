#include"bintree.h"
btNode* creatbtnode(int data)
{
	btNode* btn = (btNode*)malloc(sizeof(btNode));
	btn->data = data;
	btn->lc = NULL;
	btn->rc = NULL;
	return btn;
}
Bitree* initbtree(int rootdata)
{
	Bitree* bt = (Bitree*)malloc(sizeof(Bitree));
	bt->root = creatbtnode(rootdata);
	return bt;
}

void leftconnect(btNode* senior,btNode*junior)
{
	senior->lc = junior;
}
void rightconnect(btNode* senior, btNode* junior)
{
	senior->rc = junior;
}

void PreorderTraversal() 
{

}
void MidorderTraversal() 
{

}
void PostorderTraversal() 
{

}


void btDepth() 
{

}
void btleaveCount() 
{

}
void btnodeCount() 
{

}









