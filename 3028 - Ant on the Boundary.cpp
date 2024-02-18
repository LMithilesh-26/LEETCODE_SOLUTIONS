class Solution 
{
    public:
        int returnToBoundaryCount(vector<int>& nums) 
        {
            int cnt = 0, index = 0;
            int N = nums.size();

            for(int i=0; i<N; i++)
            {
                index += nums[i];

                if(index == 0) cnt++;
            }
            return cnt;
        }
};
