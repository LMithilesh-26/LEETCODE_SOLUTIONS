class Solution 
{
    public:
        bool check(long long mid, int x)
        {
            if((mid * mid) > x) return true;

            return false;
        }
        int mySqrt(int x) 
        {
            if(x == 0) return 0;

            int low = 1, high = x;
            int ans = 0;

            while(low <= high)
            {
                int mid = low + (high - low) / 2;

                if(check(mid, x)) high = mid - 1;
                
                else 
                {
                    ans = mid;
                    low = mid + 1;
                }
            }
            return ans;
        }
};
