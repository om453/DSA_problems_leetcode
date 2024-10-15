class Solution {
public:
    int numberOfSubstrings(string s) {
     int arr[3] = {-1, -1, -1}; // Tracks last occurrence of 'a', 'b', and 'c'
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            arr[s[i] - 'a'] = i; // Update the last occurrence of the current character
            if (arr[0] != -1 && arr[1] != -1 && arr[2] != -1) {
                // All characters 'a', 'b', and 'c' have been seen at least once
                count += 1 + min(arr[0], min(arr[1], arr[2]));
            }
        }

        return count;    
    }
};