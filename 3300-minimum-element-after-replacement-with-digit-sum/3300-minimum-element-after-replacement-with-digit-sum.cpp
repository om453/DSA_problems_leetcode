class Solution {
public:

     // Function to compute the sum of digits of a number
    int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;  // Add the last digit
            num /= 10;        // Remove the last digit
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
       int minVal = INT_MAX;  // Initialize with a large value
        
        // Iterate through the array and replace each element with its digit sum
        for (int i = 0; i < nums.size(); i++) {
            int currentSum = digitSum(nums[i]);
            // Update the minimum element if the current sum is smaller
            if (currentSum < minVal) {
                minVal = currentSum;
            }
        }
        
        return minVal;  
    }
};