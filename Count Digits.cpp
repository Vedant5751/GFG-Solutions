class Solution
{
public:
    int evenlyDivides(int N)
    {
        int temp, count{0}, N2 = N;
        while (N2 > 0)
        {
            temp = N2 % 10;
            if (temp != 0)
            {
                if (N % temp == 0)
                    count++;
            }
            N2 = N2 / 10;
        }
        return count;
    }
};