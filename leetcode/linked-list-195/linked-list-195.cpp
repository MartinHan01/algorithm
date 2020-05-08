// linked-list-195.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* currentHead = head;
        ListNode* newHead = head;
        while (head->next != NULL) {
            currentHead = head->next;
            head->next = currentHead->next;
            currentHead->next = newHead;
            newHead = currentHead;
        }
        return currentHead;
    }
};

int main()
{
	std::cout << "Hello World!\n";
}

