#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    //����n
    scanf("%d", &n);
    float sorce[100];
    //����n�Ƴɼ�
    for (i = 0; i < n; ++i)
    {
        scanf("%f", &sorce[i]);
    }
    //ȡ����߷ֺ���ͷ�
    float max = sorce[0];
    float min = sorce[0];
    for (i = 0; i < n; ++i)
    {
        if (sorce[i] > max)
        {
            max = sorce[i];
        }
        if (sorce[i] < min)
        {
            min = sorce[i];
        }
    }
    //ƽ����
    float average = 0.0f;
    for (i = 0; i < n; ++i)
    {
        average += sorce[i];
    }
    average /= n;
    printf("%.2f %.2f %.2f\n", max, min, average);
    return 0;
}