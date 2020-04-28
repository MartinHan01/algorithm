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

ElemType ansReplaceMin2_1(SqList *L);
void ansReverse2_2(SqList *L);
void ansDeleteElem2_3(SqList *L, ElemType val);
void ansDelBetween2_4(SqList *L, ElemType begin, ElemType end);
void ansDelBetween2_5(SqList *L, ElemType begin, ElemType end);
void ansDelRepeat2_6(SqList *L);


#endif //INC_2_2_LIST_H
