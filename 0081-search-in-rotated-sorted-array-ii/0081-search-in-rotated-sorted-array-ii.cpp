class Solution {
public:
    bool search(vector<int>& nums, int target) {
       int n=nums.size();
       int low=0 , high=n-1;
       
       while(low<=high){
        int mid = (low + high)/2;
        if(nums[mid] == target) return true;
           
        // edge case
        if(nums[low] == nums[mid] && nums[mid] == nums[high]){
            low = low + 1;
            high = high - 1;
            continue;
        }

 //if left part is sorted
if(nums[low] <= nums[mid]){
    if(nums[low] <= target && target <= nums[mid]){
              //element exists
                high = mid - 1;  //trim down the right subarray
    }
    else{
        low = mid + 1;    //element not exists
    }
}

 //if right part is sorted
else {
    if(nums[mid] <= target && target <= nums[high]){
              //element exists
                low = mid + 1;  //trim down the left subarray
    }
    else{
        high = mid - 1;    //element not exists
    }

  }
}

return false;

    }
};