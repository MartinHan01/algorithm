//
// Created by hanch on 2020/3/10.
//
#include "list.h"
#include <stdio.h>

void InitList(SqList *L) {
    L->length = 6;
    L->date[0] = 1;
    L->date[1] = 3;
    L->date[2] = 5;
    L->date[3] = 0;
    L->date[4] = 2;
    L->date[5] = 4;
}

void printList(SqList *L) {
    for (int i = 0; i < L->length; i++) {
        printf("%d ", L->date[i]);
    }
    printf("\n");
}

ElemType ansReplaceMin2_2_3_2_2(SqList *L) {
    if (L == NULL || L->length <= 0) { return NULL; }
    int minIndex = 0;
    int minVal = L->date[minIndex];
    for (int i = 0; i < L->length - 1; i++) {
        if(L->date[i] < minVal) {
            minIndex = i;
        }
    }

    L->date[minIndex] = L->date[L->length - 1];
    L->length--;
    return minVal;

}