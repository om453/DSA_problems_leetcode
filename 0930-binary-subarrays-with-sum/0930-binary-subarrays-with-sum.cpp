class Solution {
public:
    int func(vector<int>& nums, int goal){
        int l = 0, r = 0, sum = 0, ans = 0;
        if( goal < 0) return 0;
        while( r < nums.size() ){
            sum += nums[r];
            while( sum > goal){
                sum -= nums[l];
                l++;
            }
            ans += r - l + 1;
            r++;
        }
        return ans;
    }


    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return func(nums, goal) - func(nums, goal-1);
    }
};