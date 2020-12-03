#pragma once
#include <stdlib.h>
#include <stdio.h>

#include <stack> 


typedef struct BiTNode {
	int data;
	struct BiTNode* lchild, * rchild;
} BiTNode, *BiTree;

BiTree init();
void printTree(BiTree tree);
void preOrder(BiTree t);
void preOrderStack(BiTree t);
void inOrder(BiTree t);