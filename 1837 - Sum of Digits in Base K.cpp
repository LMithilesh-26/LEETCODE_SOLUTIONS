class Solution 
{
    public:
        int sumBase(int n, int k) 
        {
            int ans = 0;

            while(n)
            {
                int rem = n % k;
                n /= k;
                ans += rem;
            }
            return ans;
        }
};
