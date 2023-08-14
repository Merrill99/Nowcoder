#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    bool IsPopOrder(vector<int>& pushV, vector<int>& popV) {
        stack<int> _st;
        int i = 0, j = 0;
        while (i < pushV.size())
        {
            // 先入栈
            _st.push(pushV[i]);
            ++i;
            // 与弹出序列进行比较
            // 匹配出栈顶元素，出栈序列++，不匹配入栈
            while ((!_st.empty()) && (j < popV.size()) && (_st.top() == popV[j]))
            {
                _st.pop();
                ++j;
            }
        }
        // 如果栈为空，则证明完全匹配
        if (_st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};