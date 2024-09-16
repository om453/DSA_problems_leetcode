​Detailed comments solution below

class Solution {
public:
  // Function to find the sum of all minimum subarray sums
  int sumSubarrayMins(vector<int>& arr) {
  int n = arr.size(); // Get the size of the array

  // Initialize two vectors to store the number of elements less than or equal to the current element
  // on its left and right sides, respectively
     vector<int> left(n, 0), right(n, 0);
    
  // Initialize two stacks to store pairs of (value, count)
    stack<pair<int, int>> sLeft, sRight;

  // Process elements from left to right
    for (int i = 0; i < n; i++) {
      int cnt = 1;  // Initialize count to 1 (current element itself)
 // While the stack is not empty and the element at the top is greater than the current element
      while (!sLeft.empty() && sLeft.top().first > arr[i]) {
 // Add the count of the element at the top to the current count
        cnt += sLeft.top().second;
        sLeft.pop();  // Pop the element from the stack
      }
 // Push the current element and its count onto the stack
      sLeft.push({arr[i], cnt});
 // Update the left vector with the count for the current element
      left[i] = cnt;
    }

// Process elements from right to left (similar logic)
    for (int i = n - 1; i >= 0; i--) {
      int cnt = 1;
      while (!sRight.empty() && sRight.top().first >= arr[i]) {
        cnt += sRight.top().second;
        sRight.pop();
      }
      sRight.push({arr[i], cnt});
      right[i] = cnt;
    }

  int ans = 0;
  const int mod = 1e9 + 7; // Define the modulo value (example: 10^9 + 7)

 // Calculate the sum of all minimum subarray sums
    for (int i = 0; i < n; i++) {
      // Contribution of the current element: value * (count of elements less than or equal on left) * (count of elements less than or equal on right)
      ans = (ans + (arr[i] * (long long)(left[i] * right[i]) % mod) % mod) % mod;
    }

  return ans;
  }
};



que :- why we used const int mod = 1e9 + 7
Ans :- In the context of the given code, using mod = 1e9 + 7 likely helps ensure that the calculations involving large subarray sums and products stay within a manageable range and prevent potential integer overflow issues.
