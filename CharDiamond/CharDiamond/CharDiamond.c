#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    char str = 0;
    scanf("%c", &str);
    int i = 0;
    int j = 0;
    //��ӡ�ϰ벿��
    for (i = 0; i < (5 / 2 + 1); ++i)
    {
        //��ӡ�ո�
        for (j = 0; j < (5 / 2 - i); ++j)
        {
            printf(" ");
        }
        //��ӡ#
        for (j = 0; j < (2 * i + 1); ++j)
        {
            printf("%c", str);
        }
        printf("\n");
    }
    //��ӡ�°벿��
    for (i = 0; i < (5 / 2); ++i)
    {
        //��ӡ�ո�
        for (j = 0; j < i + 1; ++j)
        {
            printf(" ");
        }
        //��ӡ#
        for (j = 0; j < 5 - 2 * (i + 1); ++j)
        {
            printf("%c", str);
        }
        printf("\n");
    }
    return 0;
}