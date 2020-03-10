#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main() {
    printf("Hello, World!\n");
    SqList list;
    InitList(&list);
    printList(&list);
    //2.1删除最小，
    ansReplaceMin2_1(&list);
    printList(&list);
    //2.2逆序
    ansReverse2_2(&list);
    printList(&list);
    //2.3删除值为val的元素
    ansDeleteElem2_3(&list, 3);
    printList(&list);
    InitList(&list);
    //2.4删除中间，><
    ansDelBetween2_4(&list, 1, 4);
    printList(&list);
    InitList(&list);
    ansDelBetween2_5(&list, 1, 4);
    //2.5删除，<=
    printList(&list);
    return 0;
}