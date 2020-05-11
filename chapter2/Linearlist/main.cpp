#include <iostream>

#include "LinearList.h"

int main(int argc, char *argv[]) {
	SqList list;
	InitList(list);
	PrintList(list);
	std::cout << "length:" << Length(list) << std::endl;
	std::cout << "idx 1 :" << GetElem(list, 1) << std::endl;
	ElemType val = 13;
	std::cout << "value 7 index :" << LocateElem(list, val) << std::endl;
	ElemType iVal = 2;
	std::cout << "insert result:" << ListInsert(list, 2, iVal) << std::endl;
	PrintList(list);
	iVal = 0;
	std::cout << "delete result:" << ListDelete(list, 2, iVal) << std::endl;
	std::cout << "delete value :" << iVal << std::endl;
	PrintList(list);
}