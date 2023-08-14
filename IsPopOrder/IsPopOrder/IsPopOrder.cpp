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
            // ����ջ
            _st.push(pushV[i]);
            ++i;
            // �뵯�����н��бȽ�
            // ƥ���ջ��Ԫ�أ���ջ����++����ƥ����ջ
            while ((!_st.empty()) && (j < popV.size()) && (_st.top() == popV[j]))
            {
                _st.pop();
                ++j;
            }
        }
        // ���ջΪ�գ���֤����ȫƥ��
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