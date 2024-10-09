class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        map<long long, int> mpp;
        long long sum = 0;
        int maxLen = 0;
        for (int i = 0; i < N; i++)
        {
            sum += A[i];
            if (sum == K)
                maxLen = max(maxLen, i + 1);
            long long rem = sum - K;
            if (mpp.find(rem) != mpp.end())
            {
                int len = i - mpp[rem];
                maxLen = max(maxLen, len);
            }
            if (mpp.find(sum) == mpp.end())
                mpp[sum] = i;
        }
        return maxLen;
    }
};