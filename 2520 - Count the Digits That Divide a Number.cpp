class Solution 
{
    public:
        int countDigits(int num) 
        {
            int temp = num, cnt = 0;
            while(temp)
            {
                int rem = temp % 10;
                temp /= 10;
                if(num % rem == 0) cnt++;
            }
            return cnt;
        }
};
