#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0, b = 0, c = 0;
    //�ܳ�
    float circumference = 0.0f;
    //���
    float area = 0.0f;
    scanf("%d %d %d", &a, &b, &c);
    //�ж�����������������Ƿ�Ϸ�
    if (a + b < c || a + c < b || b + c < a)
    {
        printf("��������߷Ƿ���");
    }
    else
    {
        //�����ܳ�
        circumference = a + b + c;
        //������������׹�ʽ
        float p = 0.5 * circumference;
        area = (float)sqrt(p * (p - a) * (p - b) * (p - c));
        printf("circumference=%.2f area=%.2f", circumference, area);
    }
    return 0;
}