#include "LinearList.h"
void InitList(SqList& L) {
	int length = 10;
	for (int i = 0; i < length; i++) {
		L.data[i] = (i + 1) * 2 - 1;
	}
	L.length = length;
}
int Length(SqList& L) {
	return L.length;
}
int LocateElem(SqList& L, ElemType& e) {
	for (int i = 0; i < L.length; i++) {
		if (e == L.data[i]) {
			return i;
		}
	}
	return -1;
}
ElemType GetElem(SqList& L, int idx) {
	if (idx > L.length - 1) {
		return -1;
	}
	return L.data[idx];
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