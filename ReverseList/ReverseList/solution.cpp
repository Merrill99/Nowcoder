
 struct ListNode {
 	int val;
 	struct ListNode *next;
 	ListNode(int x) : val(x), next(nullptr) {}
 };
 
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param head ListNode类
     * @return ListNode类
     */
    ListNode* ReverseList(ListNode* head) {
        ListNode* rhead = nullptr;
        ListNode* cur = head; // 记录当前位置进行头插
        while (cur)
        {
            // 记录cur的下一个位置
            ListNode* ncur = cur->next;
            cur->next = rhead;
            rhead = cur;
            cur = ncur;
        }
        return rhead;
    }
};