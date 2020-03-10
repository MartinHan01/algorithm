#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main() {
    printf("Hello, World!\n");
    SqList list;
    InitList(&list);
    printList(&list);
    ansReplaceMin2_2_3_2_2(&list);
    printList(&list);
    return 0;
}