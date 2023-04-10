#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//求最大公约数
long long Gcd(long long a, long long b)
{
    long long ret = 0;
    long long c = 0;
    while (a % b)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    long long n = 0;
    long long m = 0;
    while (scanf("%lld %lld", &n, &m) == 2)
    {
        //求出最大公约数
        long long gcd = Gcd(n, m);
        //求出最小公倍数
        long long lcm = gcd * (n / gcd) * (m / gcd);
        long long ret = gcd + lcm;
        printf("%lld\n", ret);
    }
    return 0;
}