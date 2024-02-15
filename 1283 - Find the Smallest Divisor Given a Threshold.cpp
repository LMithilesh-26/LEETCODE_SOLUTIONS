typedef long long ll;
class Solution 
{
    public:
        bool check(ll mid, vector<int> &nums, int threshold)
        {
            ll value = 0;
            for(int i=0; i<nums.size(); i++)
            {
                value += (ceil((double)nums[i] / mid));

                if(value > threshold) return false;
            }
            return true;
        }
        int smallestDivisor(vector<int>& nums, int threshold) 
        {
            int N = nums.size();
            ll low = 1, high = 0;
            int ans = 0;

            for(int i=0; i<N; i++) high += nums[i];

            while(low <= high)
            {
                ll mid = low + (high - low) / 2;

                if(check(mid, nums, threshold))
                {
                    ans = mid;
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            return ans;
        }
};
