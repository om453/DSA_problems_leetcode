class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
       vector<int> ans;  
        
        // Iterate over each prime number in the input array
        for (int num : nums) {
            if (num == 2) {
                // Special case: No valid answer exists for 2
                ans.push_back(-1);
                continue;
            }

            int min_x = -1;  // Initialize the minimum x as -1 (indicating no valid x found yet)
            
            // Check each bit position from highest (31st bit) to lowest (0th bit)
            for (int i = 31; i >= 0; --i) {
                // If the current bit is set in 'num', we try to find a possible x
                if (num & (1 << i)) {
                    // Calculate the potential value of x by flipping the i-th bit
                    int x = num ^ (1 << i);

                    // Ensure x is non-negative
                    if (x < 0) continue;

                    // Check if x OR (x + 1) equals num
                    if ((x | (x + 1)) == num) {
                        // If this is the first valid x or it's smaller than the previously found min_x
                        if (min_x == -1 || x < min_x) {
                            min_x = x;  // Update min_x to the smallest valid x
                        }
                    }
                }
            }

            // Add the smallest valid x found, or -1 if no valid x was found
            ans.push_back(min_x);
        }

        return ans; 
    }
};