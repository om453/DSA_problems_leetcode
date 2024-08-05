class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> mpp; // Using a map to store string frequencies
        int count = 0; // Counter for distinct strings

        // Count the frequency of each string
        for (auto i : arr) mpp[i]++;

        // Iterate through the array again to find the k-th distinct string
        for (auto i : arr) {
            if (mpp[i] > 1) continue; // Skip strings with frequency greater than 1

            count++; // Increment the count of distinct strings
            if (count == k) return i; // Return the k-th distinct string
        }

        return ""; 
    }
};
