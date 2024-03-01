class Solution 
{
    public:
        int binarySearchRec(vector<int> &nums, int low, int high, int target)
        {
            if(low > high) return -1;

            int mid = low + (high - low) / 2;

            if(nums[mid] == target) return mid;

            else if(nums[mid] > target) return binarySearchRec(nums, low, mid - 1, target);

            else return binarySearchRec(nums, mid + 1, high, target);
        }
        int search(vector<int>& nums, int target) 
        {
            int low = 0, high = nums.size()-1;

            return binarySearchRec(nums, low, high, target);
        }
};
