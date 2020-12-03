#include "btree.h"

BiTree init() {
	BiTNode *arr[7];
	for (int i = 0; i < 7; i++) {
		BiTNode* node = (BiTNode*) malloc(sizeof(BiTNode));
		arr[i] = node;
		arr[i]->data = i + 1;
		arr[i]->lchild = NULL;
		arr[i]->rchild = NULL;
	}
	arr[0]->lchild = arr[1];
	arr[0]->rchild = arr[2];
	arr[1]->lchild = arr[3];
	arr[1]->rchild = arr[4];
	arr[2]->lchild = arr[5];
	arr[2]->rchild = arr[6];
	return arr[0];
}

void printTree(BiTree tree) {
	
}

void preOrder(BiTree t) {
	if (t == NULL) {
		return;
	}
	printf("%d ", t->data);
	preOrder(t->lchild);
	preOrder(t->rchild);
}

void inOrder(BiTree t) {
	if (t == NULL) {
		return;
	}
	inOrder(t->lchild);
	printf("%d ", t->data);
	inOrder(t->rchild);
}
void preOrderStack(BiTree t) {
	std::stack<BiTree> stack;
	BiTree p = t;
	stack.push(t);
	while (stack.size() != 0) {
		p = stack.top();
		stack.pop();
		printf("%d ", p->data);
		if (p->rchild != NULL) {
			stack.push(p->rchild);
		}
		if (p->lchild != NULL) {
			stack.push(p->lchild);
		}
		p = NULL;
	}
}