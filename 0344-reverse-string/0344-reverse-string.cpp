class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, end = s.size() - 1;

        // Using Two-pointer approach to reverse the string
        while (start <= end) {
            swap(s[start], s[end]); // Swap characters at start and end positions
            start++; // Move start pointer forward
            end--; // Move end pointer backward
        }
    }
};