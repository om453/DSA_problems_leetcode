class Solution {
public:
    int findGCD(vector<int>& nums) {
        
    sort(nums.begin(), nums.end());

    int small = nums[0];
    int large = nums[nums.size() - 1];

    int ans = 1;

    for (int i = 2; i <= large; i++) {
        if (small % i == 0 && large % i == 0) {
            ans = i;
        }
    }

    return ans;    
    }
};