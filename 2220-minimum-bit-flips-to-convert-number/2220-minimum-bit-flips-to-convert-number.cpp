class Solution {
public:
    int minBitFlips(int start, int goal) {
        // XOR start and goal to find the positions where bits differ
        int ans = start ^ goal;
        int count = 0;

        // Loop through each bit position
        for(int i = 0; i < 32; i++) {
            // Check if the i-th bit is set (1) in 'ans'
            if(ans & (1 << i)) {
                count++;  // If set, increment the count
            }
        }
        
        return count; 
    }
};
