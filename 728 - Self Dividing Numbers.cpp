class Solution 
{
    public:
        bool checkNumber(int num)
        {
            int temp = num;
            while(temp)
            {
                int rem = temp % 10;
                if(rem == 0 || num % rem != 0) return false;

                temp /= 10;
            }
            return true;
        }
        vector<int> selfDividingNumbers(int left, int right) 
        {
            vector<int> ans;

            for(int i=left; i<=right; i++)
            {
                if(i < 10) ans.push_back(i);
                else
                {
                    if(checkNumber(i)) ans.push_back(i);
                }
            }
            return ans;
        }
};
