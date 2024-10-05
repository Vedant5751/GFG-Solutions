class Solution
{
public:
    int largest(vector<int> &arr)
    {
        int large = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            large = max(large, arr[i]);
        }
        return large;
    }
};