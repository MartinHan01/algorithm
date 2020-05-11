#pragma once

#include <iostream>
#define MaxSize 50
#define InitSize 10

#define ElemType int

typedef struct {
	ElemType data[MaxSize];
	int length;
} SqList;

//typedef struct {
//	ElemType* data;
//	int maxSize, length;
//} SeqList;

void InitList(SqList& L);
int Length(SqList& L);
int LocateElem(SqList& L, ElemType& e);
ElemType GetElem(SqList& L, int idx);
bool ListInsert(SqList &L, int pos, ElemType& e);
bool ListDelete(SqList& L, int pos, ElemType& e);
void PrintList(SqList& L);
bool Empty(SqList& L);
void DestoryList(SqList& L);