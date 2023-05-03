#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here
        struct ListNode* lesshead, * lesstail, * greaterhead, * greatertail;
        struct ListNode* cur = pHead;
        //创建哨兵位
        lesshead = lesstail = (struct ListNode*)malloc(sizeof(struct ListNode));
        greaterhead = greatertail = (struct ListNode*)malloc(sizeof(struct ListNode));
        //遍历然后分别进行尾插
        while (cur)
        {
            if (cur->val < x)
            {
                lesstail->next = cur;
                lesstail = lesstail->next;
            }
            else
            {
                greatertail->next = cur;
                greatertail = greatertail->next;
            }
            cur = cur->next;
        }
        lesstail->next = greaterhead->next;
        greatertail->next = NULL;
        pHead = lesshead->next;
        free(lesshead);
        free(greaterhead);
        return pHead;
    }
};