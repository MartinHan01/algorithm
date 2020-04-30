#pragma once
//#include <iostream>
//
//class Node {
//public:
//    int val;
//    Node* next;
//};
//
//class MyLinkedList {
//public:
//    /** Initialize your data structure here. */
//    MyLinkedList() {
//        head->next = NULL;
//    }
//
//    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
//    int get(int index) {
//        Node* now = head->next;
//        int currIndex = 0;
//        while (now != NULL) {
//            if (currIndex == index) {
//                return now->val;
//            }
//            if (now == NULL) {
//                return -1;
//            }
//            currIndex++;
//            now = now->next;
//        }
//        return -1;
//    }
//
//    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
//    void addAtHead(int val) {
//        Node* p = new Node;
//        p->val = val;
//        p->next = head->next;
//        head->next = p;
//    }
//
//    /** Append a node of value val to the last element of the linked list. */
//    void addAtTail(int val) {
//        Node* p = new Node;
//        p->val = val;
//        p->next = NULL;
//        Node* current = head;
//        while (current->next != NULL) {
//            current = current->next;
//        }
//        current->next = p;
//    }
//
//    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
//    void addAtIndex(int index, int val) {
//        Node* p = new Node;
//        p->val = val;
//        Node* current = head;
//        int currIndex = 0;
//        /*while (current->next != NULL) {
//
//        }*/
//
//    }
//
//    /** Delete the index-th node in the linked list, if the index is valid. */
//    void deleteAtIndex(int index) {
//
//    }
//private:
//    Node* head;
//};
//
///**
// * Your MyLinkedList object will be instantiated and called as such:
// * MyLinkedList* obj = new MyLinkedList();
// * int param_1 = obj->get(index);
// * obj->addAtHead(val);
// * obj->addAtTail(val);
// * obj->addAtIndex(index,val);
// * obj->deleteAtIndex(index);
// */
//
//
//int main(int argc, char *argv[]) {
//    std::cout << "Hello World!\n";
//    MyLinkedList* obj = new MyLinkedList();
//    int index = 0;
//    int param_1 = obj->get(index);
//    int val = 30;
//    obj->addAtHead(val);
//    obj->addAtTail(val);
//    obj->addAtIndex(index, val);
//    obj->deleteAtIndex(index);
//    return 0;
//}
