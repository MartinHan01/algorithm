#include "LinearList.h"
void InitList(SqList& L) {
	for (int i = 0; i < 10; i++) {
		L.data[i] = (i + 1) * 2 - 1;
	}
	L.length = 10;
}
int Length(SqList& L) {
	return L.length;
}
int LocateElem(SqList& L, ElemType& e) {
	return 0;
}
ElemType GetElem(SqList& L, int i) {
	return 0;
}
void ListInsert(SqList& L, int i, ElemType& e) {

}
void ListDelete(SqList& L, int i, ElemType& e) {

}
void PrintList(SqList& L) {
	for (int i = 0; i < L.length; i++) {
		std::cout << "[" << i << "]=" << L.data[i] << "; ";
	}
	std::cout << std::endl;
}
bool Empty(SqList& L) {
	return L.length == 0;
}
void DestoryList(SqList& L) {

}