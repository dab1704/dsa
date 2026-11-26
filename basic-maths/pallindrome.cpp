class Solution
{
private:
    int reverse(int x)
    {
        long reverseNum = 0;
        while (x > 0)
        {
            int lastDigit = x % 10;
            reverseNum = reverseNum * 10 + lastDigit;
            x = x / 10;
        }
        if (reverseNum > INT_MAX || reverseNum < INT_MIN)
        {
            return 0; // LeetCode's required behavior on 32-bit overflow
        }
        return (int)reverseNum;
    }

public:
    bool isPalindrome(int x)
    {
        int reverseNumber = reverse(x);
        if (x == reverseNumber)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};