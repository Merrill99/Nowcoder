#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n = 0;
    int arr[3] = { 2,3,7 };
    scanf("%d", &n);
    int flag = 0;
    //��n�Գ�2��7��3
    for (int i = 0; i < 3; ++i)
    {
        if (n % arr[i] == 0)
        {
            printf("%d ", arr[i]);
            flag = 1;
        }
    }
    //��������������������n
    if (0 == flag)
    {
        printf("n");
    }
    return 0;
}