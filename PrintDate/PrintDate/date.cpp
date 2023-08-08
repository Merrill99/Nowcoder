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
    int year, num;
    while (cin >> year >> num)
    {
        int month = 1;
        if (num <= 31)
        {
            printf("%04d-%02d-%02d\n", year, month, num);
        }
        else
        {
            int day = 0;
            int countday = 0;
            while (countday != num)
            {
                if (day == GetMonthDay(year, month))
                {
                    day -= GetMonthDay(year, month);
                    ++month;
                }
                // 如果超过12月则重置月份增加年数
                if (month > 12)
                {
                    month = 1;
                    ++year;
                }
                ++countday;
                ++day;
            }
            printf("%04d-%02d-%02d\n", year, month, day);
        }
    }
    return 0;
}