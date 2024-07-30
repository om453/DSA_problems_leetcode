class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // Use an unordered map to store elements and their indices
        unordered_map<int, int> mpp;

    
        for (int i = 0; i < nums.size(); i++) {
            // Check if the current element exists in the map
            if (mpp.count(nums[i])) {
                // If the difference between current index and previous index is <= k, return true
                if (i - mpp[nums[i]] <= k) {
                    return true;
                }
            }
            // Update the map with the current index for the element
            mpp[nums[i]] = i;
        }

      
        return false;
    }
};
