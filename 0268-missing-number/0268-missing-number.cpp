class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            sum = sum + nums[i];
        }
        // n*(n+1)/2 is summation from 1 to n
        return n*(n+1)/2 - sum;  
    }
};