#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    float a = 0.0f;
    int prize = 0.0;
    char b = { 0 };
    int flag = 0;
    scanf("%f %c", &a, &b);
    if (b == 'y' || b == 'n')
    {
        //≈–∂œ «∑Òº”º±
        if (b == 'y')
        {
            flag = 1;
        }
        if (a - (int)a > 0.0)
        {
            prize = 20 + 1 * (int)a + 5 * flag;
            printf("%d", prize);
        }
        else
        {
            prize = 20 + 1 * (int)(a - 1) + 5 * flag;
            printf("%d", prize);
        }
    }
    else
    {
        printf(" ‰»Î¥ÌŒÛ£°");
    }
    return 0;
}