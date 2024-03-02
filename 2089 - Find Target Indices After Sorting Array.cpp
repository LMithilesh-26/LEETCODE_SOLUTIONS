class Solution 
{
    public:

        vector<int> targetIndices(vector<int>& nums, int target) 
        {
            sort(nums.begin(), nums.end());

            int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
            int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

            vector<int> ans;
            for(int i=lb; i<ub; i++) ans.push_back(i);

            return ans;
        }
};
