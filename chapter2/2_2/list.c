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
    L->date[5] = 3;
}

void printList(SqList *L) {
    for (int i = 0; i < L->length; i++) {
        printf("%d ", L->date[i]);
    }
    printf("\n");
}

ElemType ansReplaceMin2_1(SqList *L) {
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

void ansReverse2_2(SqList *L) {
    int loopCount = L->length / 2;
    int tmp;
    for(int i = 0 ; i < loopCount ; i++) {
        tmp = L->date[i];
        L->date[i] = L->date[L->length - i - 1];
        L->date[L->length - i - 1] = tmp;
    }
}

void ansDeleteElem2_3(SqList *L, ElemType val) {
    int k = 0;
    for(int i = 0; i < L->length; i++) {
        if(L->date[i] != val) {
            L->date[k] = L->date[i];
            k++;
        }
    }
    L->length = k;

}

void ansDelBetween2_4(SqList *L, ElemType begin, ElemType end) {
    if(begin >= end) { return ;}
    if(L == NULL) {return ;}
    int k = 0;
    for(int i = 0; i < L->length; i++) {
        if(L->date[i] <= begin || L->date[i] >= end) {
            L->date[k] = L->date[i];
            k++;
        }
    }
    L->length = k;
}

void ansDelBetween2_5(SqList *L, ElemType begin, ElemType end) {
    if(begin >= end) { return ;}
    if(L == NULL) {return ;}
    int k = 0;
    for(int i = 0; i < L->length; i++) {
        if(L->date[i] < begin || L->date[i] > end) {
            L->date[k] = L->date[i];
            k++;
        }
    }
    L->length = k;
}

void ansDelRepeat2_6(SqList *L) {

}