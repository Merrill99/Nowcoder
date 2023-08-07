#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int count = 0;
    auto right = str.rbegin();
    while (*right != ' ')
    {
        ++count;
        ++right;
        if (right == str.rend())
        {
            break;
        }
    }
    // int right = str.size() - 1;
    // while (str[right] != ' ')
    // {
    //     ++count;
    //     --right;
    //     if (right < 0)
    //     {
    //         break;
    //     }
    // }
    cout << count << endl;
    return 0;
}