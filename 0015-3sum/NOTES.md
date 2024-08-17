//T.C : O(n^2)
//S.C : O(1)
Detailed explanation

class Solution {
public:
    void twoSum(vector<int>& nums, int k, vector<vector<int>>& result, int target) {
        // Two-pointer technique to find pairs that sum up to 'target' within a sorted subarray starting at index 'k'.
        
        int left = k, right = nums.size() - 1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum > target) {
                // If the sum is too large, decrease the right pointer.
                right--;
            } else if (sum < target) {
                // If the sum is too small, increase the left pointer.
                left++;
            } else {
                // Found a triplet: (-target, nums[left], nums[right])
                result.push_back({-target, nums[left], nums[right]});
                
                // Skip duplicate values for the current left pointer.
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }
                
                // Skip duplicate values for the current right pointer.
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }
                
                // Move pointers to the next distinct values.
                left++;
                right--;
            }
        }
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Base case: If the array has fewer than three elements, return an empty result.
        if (nums.size() < 3) {
            return {};
        }
        
        // Sort the input array to enable the two-pointer technique.
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> triplets; // Store the resulting triplets
        
        // Iterate through the array to fix the first element of each triplet.
        for (int i = 0; i < nums.size() - 2; i++) {       //There are at least three elements remaining in the array to form a triplet.
            // Skip duplicate values for the first element to avoid redundant calculations.
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Find pairs that sum to -nums[i] using the twoSum function.
            twoSum(nums, i + 1, triplets, -nums[i]);
        }
        
        return triplets;
    }
};
