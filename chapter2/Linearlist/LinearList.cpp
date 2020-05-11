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
			return i + 1; //返回位序 i+1
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
bool ListInsert(SqList& L, int pos, ElemType& e) {
	if (pos < 1 || pos > L.length + 1) {
		return false;
	}
	if (L.length >= MaxSize) {
		return false;
	}
	for (int i = L.length; i >= pos; i--) { //在pos位序后面插入
		L.data[i] = L.data[i - 1];
	}
	L.data[pos] = e;
	L.length++;
	return true;
}
bool ListDelete(SqList& L, int pos, ElemType& e) { //删除位序pos那个节点
	if (pos < 1 || pos > L.length) {
		return false;
	}
	e = L.data[pos - 1];
	for (int i = pos - 1; i < L.length - 1; i++) {
		L.data[i] = L.data[i + 1];
	}
	L.length--;
	return true;
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