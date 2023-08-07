#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
    class Sum
    {
    public:
        // ¹¹Ôìº¯Êý
        Sum()
        {
            _ret += _num;
            ++_num;
        }
    };
public:
    int Sum_Solution(int n) {
        Sum a[n];
        return _ret;
    }
private:
    static int _num;
    static int _ret;
};
int Solution::_num = 1;
int Solution::_ret = 0;