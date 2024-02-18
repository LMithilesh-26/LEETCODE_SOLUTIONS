typedef long long ll;
class Solution 
{
    public:
        int check(ll num, ll mid)
        {
            if(mid * mid == num) return 1;

            else if(mid * mid > num) return 2;

            return 0;
        }
        bool isPerfectSquare(int num) 
        {
            if(num == 1) return 1;

            ll low = 0;
            ll high = num/2;

            while(low <= high)
            {
                ll mid = low + (high - low) / 2;

                if(int flag = check(num, mid))
                {
                    if(flag == 1) return mid;

                    else high = mid - 1;
                }
                else low = mid + 1;
            }
            return false;
        }
};
