class Solution {
public:
   vector<vector<int>> result;

    void solve(int i, vector<int>& nums, vector<int>& temp){
        // Base case 
        if(i >= nums.size()){
           result.push_back(temp);
           return;
        }

        temp.push_back(nums[i]);  // Take the ith element of nums
        solve( i+1 , nums , temp);
        temp.pop_back();  // Not take ith element
        solve( i+1 , nums , temp);  // Explore again
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;  //for store subset

        solve(0, nums , temp);

        return result;
    }
};