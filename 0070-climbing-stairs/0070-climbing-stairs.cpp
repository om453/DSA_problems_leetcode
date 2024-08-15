class Solution {

    //By Recursion with Memo Approach : Top Down
public:
      // Memoization table to store calculated results
    int t[46];

    int solve(int n) {
        // Base cases:
        if (n == 0 || n == 1 || n == 2) {
            return n; // Number of ways to climb 0, 1, or 2 steps
        }

        // Check if the result for n is already calculated:
        if (t[n] != -1) {
            return t[n]; // Return the pre-calculated result
        }

        // Calculate the number of ways to climb n steps:
        int a = solve(n - 1); 
        int b = solve(n - 2); 

        // Store the result in the memoization table
        return t[n] = a + b; // Total ways to climb n steps
    }

    int climbStairs(int n) {
        memset(t, -1, sizeof(t));
        return solve(n);
    }
};

