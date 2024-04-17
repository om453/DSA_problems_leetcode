class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Using two pointers 
        int start = 0 , end = nums.size()-1;

   if(nums.size() == 1){         //Edge case if only one element is exists in array
       if(nums[0] == val){
             nums.pop_back();
             return 0;
    }
}

while(start<=end){
    if(nums[start] == val){   
        swap(nums[start] , nums[end]);
        end--;
        nums.pop_back();
    }
    else start++;
 }

 return nums.size();

   }
};