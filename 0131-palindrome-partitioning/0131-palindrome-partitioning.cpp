class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;    //To store a single partition
        partitionHelper(0, s, path, res);
        return res;
    }

    void partitionHelper(int index, string s, vector<string> path, vector<vector<string>> &res) {
        // Base case: If we've reached the end of the string, add the current partition to the result
        if (index == s.size()) {
            res.push_back(path);
            return;
        }

        // Iterate over all possible substrings starting from the current index
        for (int i = index; i < s.size(); ++i) {
            if (isPalindrome(s, index, i)) {
                // Add the palindrome to the current partition
                path.push_back(s.substr(index, i - index + 1));
                partitionHelper(i + 1, s, path, res);   //Recursively explore the remaining part of the string
                path.pop_back();      // Backtrack: remove the last added palindrome
            }
        }
    }

    bool isPalindrome(string s, int start, int end) {
        // Check if the substring is a palindrome using two pointers
        while (start <= end) {
            if (s[start++] != s[end--]) {
                return false;
            }
        }
        return true;
    }
};
