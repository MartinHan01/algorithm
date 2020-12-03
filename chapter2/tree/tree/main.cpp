#include <stdio.h>
#include "btree.h"

int main() {
	BiTree tree = init();
	//printf("hello");
	//printTree(tree);
	preOrder(tree);
	printf("\n");
	preOrderStack(tree);
	printf("\n");
	//inOrder(tree);
	return 0;
}
