class Solution 
{
    public:
        int subtractProductAndSum(int n) 
        {
            int product = 1, sum = 0;
            while(n)
            {
                int rem = n % 10;
                n /= 10;
                product *= rem;
                sum += rem;
            }
            return (product - sum);
        }
};
