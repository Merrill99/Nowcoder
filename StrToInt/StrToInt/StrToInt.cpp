#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Solution {
public:
    int StrToInt(string str) {
        // ����ַ���Ϊ��
        if (str.size() == 0)
        {
            return 0;
        }
        int flag = 1;
        // �жϵ�һ���ַ��Ƿ�Ϊ+-
        int i = 0;
        if (str[i] == '+' || str[i] == '-')
        {
            if (str[i] == '-')
            {
                flag = -1;
            }
            ++i;
        }
        int num = 0;
        for (; i < str.size(); ++i)
        {
            // �����Ϊ�����ַ�������0
            if (str[i] < '0' || str[i] > '9')
            {
                return 0;
            }
            // ת��Ϊ����
            int ch = str[i] - '0';
            num = num * 10 + ch;
        }
        return num * flag;
    }
};