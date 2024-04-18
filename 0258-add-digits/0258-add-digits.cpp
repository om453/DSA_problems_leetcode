class Solution {
public:
    int addDigits(int num) {
        int ans;
        ans = (num - 1) % 9 + 1;   // Mathematical logical expression to find digit root
        return ans;
    }
};