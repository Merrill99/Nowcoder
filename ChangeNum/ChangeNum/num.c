#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    //记录第几位
    int i = 0;
    //记录结果
    int ret = 0;
    while (n)
    {
        //得到每一位
        int tmp = n % 10;
        //判断每一位为奇数还是偶数
        if (tmp % 2 != 0)
        {
            ret += (int)pow(10, i);
        }
        ++i;
        //去掉个位数
        n /= 10;
    }
    printf("%d\n", ret);
    return 0;
}