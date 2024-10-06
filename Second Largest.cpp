class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        int large = arr[0];
        int secondlarge = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if(arr[i] > large){
                secondlarge = large;
                large = arr[i];
                }
            else if(arr[i] < large && arr[i] > secondlarge){
                secondlarge = arr[i];
            }
        }
        return secondlarge;
    }
};