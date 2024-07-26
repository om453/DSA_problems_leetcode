
class Solution {
private:
    void backtrack(vector<vector<int>>& result, vector<int>& combination, int k, int n, int start) {
        // Base case: if k and n are both 0, a valid combination is found
        if (k == 0 && n == 0) {
            result.push_back(combination);
            return;
        }
        // Pruning: if k or n becomes negative or start exceeds 9, terminate the search
        if (k <= 0 || n <= 0 || start > 9) {
            return;
        }

        // Iterate over possible numbers starting from start
        for (int i = start; i <= 9; ++i) {
            // Include current number i in the combination
            combination.push_back(i);
            // Recursively explore combinations with k-1 and n-i
            backtrack(result, combination, k - 1, n - i, i + 1);
            // Backtrack by removing the last added number
            combination.pop_back();
        }
    }

    public:
    vector<vector<int>> combinationSum3(int k, int n) {
        // Initialize result vector to store valid combinations
        vector<vector<int>> result;
        vector<int> combination; // Temporary vector to build current combination
        backtrack(result, combination, k, n, 1); // Start backtracking from 1
        return result;
    }
};