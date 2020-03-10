//
// Created by hanch on 2020/3/10.
//

#ifndef INC_2_2_LIST_H
#define INC_2_2_LIST_H

#define MaxSize 50

typedef int ElemType;

typedef struct {
    ElemType date[MaxSize];
    int length;
} SqList;


void InitList(SqList *L);
void printList(SqList *L);

ElemType ansReplaceMin2_2_3_2_2(SqList *L);

#endif //INC_2_2_LIST_H
