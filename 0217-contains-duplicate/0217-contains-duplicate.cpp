class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     unordered_map<int,int> mpp;

    // Count the occurrences of each number in the array
     for(auto it:nums){
        mpp[it]++;
     }
     
     for(int i=0; i<nums.size(); i++){
// essentially checking if the current number nums[i] appears more than once in the array. 
        if(mpp[nums[i]]>1)   
        return true;  
     }
     return false;
    }
};