class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
      vector<int> ans;
        for(auto num : nums){
            bool found = false;
            int min_ans = -1;
            // Iterate from 0 to num-1 to find the minimal ans[i]
            for(int val = 0; val < num; ++val){
                if( (val | (val + 1)) == num ){
                    min_ans = val;
                    found = true;
                    break; // Since we're iterating from smallest to largest, first found is minimal
                }
            }
            ans.push_back(min_ans);
        }
        return ans;  
    }
};