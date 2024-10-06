class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        int large = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            large = max(large, arr[i]);
        }

        int secondlarge = -1;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] != large && arr[j] < large)
                secondlarge = max(secondlarge, arr[j]);
        }
        return secondlarge;
    }
};