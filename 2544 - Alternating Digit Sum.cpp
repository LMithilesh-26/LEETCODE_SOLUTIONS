class Solution 
{
    public:
        int alternateDigitSum(int n) 
        {
            int digits = floor(log10(n) + 1);
            bool flag = digits % 2 == 0 ? true : false;

            int ans = 0;
            while(n)
            {
                int rem = n % 10;
                n /= 10;
                if(flag) 
                {
                    ans -= rem;
                    flag = false;
                }
                else
                {
                    ans += rem;
                    flag = true;
                }
            }
            return ans;
        }
};
