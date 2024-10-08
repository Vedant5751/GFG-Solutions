class Solution
{
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> answer;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (arr1[i] <= arr2[j])
            {
                if (answer.size() == 0 || answer.back() != arr1[i])
                    answer.push_back(arr1[i]);
                i++;
            }
            else
            {
                if (answer.size() == 0 || answer.back() != arr2[j])
                    answer.push_back(arr2[j]);
                j++;
            }
        }
        while (i < n)
        {
            if (answer.size() == 0 || answer.back() != arr1[i])
                answer.push_back(arr1[i]);
            i++;
        }
        while (j < m)
        {
            if (answer.size() == 0 || answer.back() != arr2[j])
                answer.push_back(arr2[j]);
            j++;
        }
        return answer;
    }
};