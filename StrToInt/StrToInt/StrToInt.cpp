#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Solution {
public:
    int StrToInt(string str) {
        // 如果字符串为空
        if (str.size() == 0)
        {
            return 0;
        }
        int flag = 1;
        // 判断第一个字符是否为+-
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
            // 如果不为数字字符，返回0
            if (str[i] < '0' || str[i] > '9')
            {
                return 0;
            }
            // 转换为整型
            int ch = str[i] - '0';
            num = num * 10 + ch;
        }
        return num * flag;
    }
};