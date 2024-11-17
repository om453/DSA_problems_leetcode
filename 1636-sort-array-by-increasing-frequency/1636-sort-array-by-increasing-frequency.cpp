// Custom comparator function for sorting pairs
// Sorting based on frequency (second value of the pair)
// If frequencies are the same, sort in decreasing order of the number (first value of the pair)
bool mycomp(pair<int, int> a, pair<int, int> b) {
    if (a.second < b.second) { // Lower frequency comes first
        return true;
    } else if (a.second > b.second) { // Higher frequency comes later
        return false;
    } else { // If frequencies are the same, compare by value in descending order
        return a.first >= b.first;
    }
}

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp; // Map to count the frequency of each number

        // Step 1: Count the frequency of each number in the array
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        vector<pair<int, int>> vp; // Vector to store number and their frequency as pairs

        // Step 2: Transfer elements from map to a vector of pairs
        for (auto it : mp) {
            vp.push_back({it.first, it.second}); // Pair format: {number, frequency}
        }

        // Step 3: Sort the vector of pairs using the custom comparator
        sort(vp.begin(), vp.end(), mycomp);

        vector<int> ans; // Vector to store the final sorted result

        // Step 4: Reconstruct the sorted array based on the sorted pairs
        for (auto it : vp) {
            int x = it.first;  // Extract the number
            int f = it.second; // Extract its frequency
            while (f--) {      // Add the number to the result 'frequency' times
                ans.push_back(x);
            }
        }

        return ans; // Return the sorted array
    }
};
