#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int GetMonthDay(int year, int month)
{
    int monthday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if ((2 == month) && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
    {
        return 29;
    }
    return monthday[month];
}

int main() {
    int year, month, day;
    int sum = 0;
    cin >> year >> month >> day;
    for (int i = 1; i < month; ++i)
    {
        sum += GetMonthDay(year, i);
    }
    sum += day;
    cout << sum << endl;
}