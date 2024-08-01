class Solution {
public:
    bool isPowerOfTwo(int n) {
        // By bit manipulation 
        if (n <= 0) return false; // Ensure n is positive
        return (n & (n - 1)) == 0; // Check if n is a power of two
    }
};