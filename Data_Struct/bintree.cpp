#include"bintree.h"

btNode* creatbtnode(int data)
{
	btNode* btn = (btNode*)malloc(sizeof(btNode));
	btn->data = data;
	btn->lc=NULL;
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

void PreorderTraversal(btNode*root) 
{
	if (root)
	{
		printf("%d -> ", root->data);
		PreorderTraversal(root->lc);
		PreorderTraversal(root->rc);
	}
}
void MidorderTraversal(btNode* root)
{
	if (root)
	{
		MidorderTraversal(root->lc);
		printf("%d -> ", root->data);
		MidorderTraversal(root->rc);
	}
}
void PostorderTraversal(btNode*root) 
{
	if (root)
	{
		PostorderTraversal(root->lc);
		PostorderTraversal(root->rc);
		printf("%d -> ", root->data);
	}
}










