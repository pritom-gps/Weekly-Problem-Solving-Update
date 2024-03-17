class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        // code here
        int left = 0;
        int right = 0;
        long long sum = 0;
        long long ans = 0;
        while (right < N)
        {
            sum += Arr[right];
            if (right - left + 1 == K)
            {
                ans = max(sum, ans);
                sum -= Arr[left];
                right++;
                left++;
            }
            else
                right++;
        }
        return ans;
    }
};
