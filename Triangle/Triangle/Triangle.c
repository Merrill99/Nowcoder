#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0, b = 0, c = 0;
    //周长
    float circumference = 0.0f;
    //面积
    float area = 0.0f;
    scanf("%d %d %d", &a, &b, &c);
    //判断输入的三角形三边是否合法
    if (a + b < c || a + c < b || b + c < a)
    {
        printf("输入的三边非法！");
    }
    else
    {
        //计算周长
        circumference = a + b + c;
        //计算面积。海伦公式
        float p = 0.5 * circumference;
        area = (float)sqrt(p * (p - a) * (p - b) * (p - c));
        printf("circumference=%.2f area=%.2f", circumference, area);
    }
    return 0;
}