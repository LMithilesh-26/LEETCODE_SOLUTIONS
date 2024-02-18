class Solution 
{
    public:
        int maxOperations(vector<int>& nums) 
        {
            int N = nums.size();
            int cnt = 1, sum = nums[0] + nums[1];
            for(int i=2; i<N; i+=2)
            {
                if(nums[i] + nums[i+1] == sum) cnt++;

                else break;
            }
            return cnt;
        }
};
