//* By using hashing method 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       // Create an unordered map to store number frequencies
        unordered_map<int, int> map;

        // Populate the map with number frequencies
        for (auto i : nums) {
            map[i]++;
        }

        // Find the missing number
        for (int i = 0; i < nums.size(); i++) {
            if (map.count(i) == 0) {
                return i;
            }
        }

        // If no missing number found, return the largest possible number
        return nums.size();

    }
};


//--------------------------------------------------------------------------------------------------------------------------------------------------------------

//* By using  summation method 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            sum = sum + nums[i];
        }
        // n*(n+1)/2 is summation from 1 to n
        return n*(n+1)/2 - sum;  
    }
};
