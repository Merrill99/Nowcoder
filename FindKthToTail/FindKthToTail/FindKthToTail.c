#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
    // write code here
    struct ListNode* slow = pListHead, * fast = pListHead;
    int count = 0;
    //先让fast走k个结点
    while (k--)
    {
        if (fast == NULL)
            return NULL;
        fast = fast->next;
    }
    while (fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}