#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int num = 0;
    int year = 0;
    int month = 0;
    int date = 0;
    scanf("%d", &num);
    //ȡ�����
    year = num / 10000;
    num %= 10000;
    //ȡ���·�
    month = num / 100;
    //ȡ������
    date = num % 100;
    printf("year=%d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", date);
    return 0;
}