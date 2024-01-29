
 struct ListNode {
 	int val;
 	struct ListNode *next;
 	ListNode(int x) : val(x), next(nullptr) {}
 };
 
class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param head ListNode��
     * @return ListNode��
     */
    ListNode* ReverseList(ListNode* head) {
        ListNode* rhead = nullptr;
        ListNode* cur = head; // ��¼��ǰλ�ý���ͷ��
        while (cur)
        {
            // ��¼cur����һ��λ��
            ListNode* ncur = cur->next;
            cur->next = rhead;
            rhead = cur;
            cur = ncur;
        }
        return rhead;
    }
};