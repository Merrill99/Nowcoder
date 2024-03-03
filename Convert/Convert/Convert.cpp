#include<iostream>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int x) :
        val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* _Convert(TreeNode* cur, TreeNode*& prev)
    {
        if (cur == nullptr)
            return nullptr;

        // ÖĞĞò
        _Convert(cur->left, prev);

        cur->left = prev;
        if (prev)
            prev->right = cur;
        prev = cur;

        _Convert(cur->right, prev);

        return cur;

    }
    TreeNode* Convert(TreeNode* pRootOfTree) {
        TreeNode* root = pRootOfTree, * prev = nullptr;
        _Convert(root, prev);

        TreeNode* head = pRootOfTree;
        while (head && head->left)
        {
            head = head->left;
        }

        return head;
    }
};