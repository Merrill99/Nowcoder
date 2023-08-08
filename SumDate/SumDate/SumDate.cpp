#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int GetMonthDay(int year, int month)
{
    int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    // 判断闰年
    if ((month == 2) && ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))
    {
        return 29;
    }
    return day[month];
}

int main()
{
    int n = 0;
    cin >> n;
    while (n--)
    {
        int year, month, day, days;
        cin >> year >> month >> day >> days;
        day += days;
        while (day > GetMonthDay(year, month))
        {
            // 超过的天数减去本月的天数
            day -= GetMonthDay(year, month);
            ++month;
            // 如果月份超过12月，重置月份，增加年数
            if (month > 12)
            {
                month = 1;
                ++year;
            }
        }
        printf("%4d-%02d-%02d\n", year, month, day);
    }
}