#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int hour = 0;
    int minute = 0;
    int k = 0;
    //�������ڵ�ʱ�̺�Ҫ˯��ʱ��
    scanf("%d:%d %d", &hour, &minute, &k);
    if (hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59)
    {
        hour = (hour + (minute + k) / 60) % 24;
        minute = (minute + k) % 60;
        printf("%02d:%02d", hour, minute);
    }
    else
    {
        printf("����Ƿ���");
    }
    return 0;
}