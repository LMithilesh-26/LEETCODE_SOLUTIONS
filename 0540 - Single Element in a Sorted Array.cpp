class Solution 
{
    public:
        bool check(int mid, vector<int> &nums)
        {
            if(mid % 2 == 0) // index is even
            {
                if(nums[mid] == nums[mid+1]) return false;

                else return true;
            }
            else // index is odd
            {
                if(nums[mid] == nums[mid-1]) return false;

                else return true;
            }
        }
        int singleNonDuplicate(vector<int>& nums) 
        {
            int N = nums.size();
            if(N == 1) return nums[0];

            int low = 0, high = N-1;
            int ans = -1;

            while(low <= high)
            {
                int mid = low + (high - low) / 2;

                if(check(mid, nums))
                {
                    ans = nums[mid];
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            return ans;
        }
};
