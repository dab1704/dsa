class Solution
{
public:
    void reverse(int arr[], int n)
    {
        int temp[n];
        for (int i = 0; i < n; i++)
        {
            temp[n - i - 1] = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
    }
};