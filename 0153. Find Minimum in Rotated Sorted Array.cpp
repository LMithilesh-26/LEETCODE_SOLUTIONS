class Solution 
{
    public:
        bool check(vector<int> &nums, int mid)
        {
            if(nums[0] > nums[mid]) return true;

            return false;
        }
        int binarySearch(vector<int> &nums)
        {
            int N = nums.size();
            int low = 0, high = N-1;
            int ans = 0;

            while(low <= high)
            {
                int mid = low + (high - low) / 2;

                if(check(nums, mid))
                {
                    ans = mid;
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            return nums[ans];
        }
        int findMin(vector<int>& nums) 
        {
            return binarySearch(nums);
        }
};
