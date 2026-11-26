class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        int sum = 0;
        int n;
        for (int i = 1; i < num - 1; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        return (num == sum);
    }
};