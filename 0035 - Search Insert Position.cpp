class Solution 
{
    public:
        bool check(vector<int>& nums, int mid, int target)
        {
            if(nums[mid] >= target) return true;

            return false;
        }
        int searchInsert(vector<int>& nums, int target) 
        {
            int N = nums.size();
            if(target > nums[N-1]) return N; // EDGE CASE
            
            int low = 0, high = N-1;
            int ans = -1;
            
            while(low <= high)
            {
                int mid = low + (high - low) / 2;

                if(check(nums, mid, target))
                {
                    ans = mid;
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            return ans;
        }
};
