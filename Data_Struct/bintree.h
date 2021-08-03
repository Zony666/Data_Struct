#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef struct bintnode {
	int data;
	struct bintnode* lc;
	struct bintnode* rc;
}btNode;

typedef struct bitree {
	btNode* root;
}Bitree;


btNode* creatbtnode(int data);
Bitree* initbtree(int rootdata);
void rightconnect(btNode* senior, btNode* junior);
void leftconnect(btNode* senior, btNode* junior);
void PreorderTraversal(btNode*root);
void MidorderTraversal(btNode*root);
void PostorderTraversal(btNode*root);


