class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
      int n = nums.size();

      sort(begin(nums) , end(nums));

//it holds this condition nums[i] < nums[i+1] < nums[i+2]
      for(int i = n-3; i>=0; i--){
        if(nums[i] + nums[i+1] > nums[i+2])  //It's like a+b>c   
        return nums[i] + nums[i+1] + nums[i+2];
      }
      return 0;  
    } 
};