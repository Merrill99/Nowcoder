#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    //��¼�ڼ�λ
    int i = 0;
    //��¼���
    int ret = 0;
    while (n)
    {
        //�õ�ÿһλ
        int tmp = n % 10;
        //�ж�ÿһλΪ��������ż��
        if (tmp % 2 != 0)
        {
            ret += (int)pow(10, i);
        }
        ++i;
        //ȥ����λ��
        n /= 10;
    }
    printf("%d\n", ret);
    return 0;
}