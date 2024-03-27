class Solution {


  // Using Binary search in the parts of lowerBond and upperBond 

     int lowerBound(vector<int>& arr, int target){
        int s=0;
        int e=arr.size()-1;
        int ans = -1;

       
        while(s<=e){
            int mid = s + (e-s)/2;
            if(target == arr[mid]){
                ans = mid;
                e = mid - 1;
            }
            else if(target < arr[mid]){
                e= mid -1;
            }
            else{
                s=mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

     int upperBound(vector<int>& arr, int target){
        int s = 0;
        int e = arr.size()-1;
        int ans = -1;

        
        while(s<=e){
            int  mid = s + (e-s)/2;
            if(target == arr[mid]){
                ans = mid;
                s = mid + 1;
            }
            else if(target < arr[mid]){
                e= mid -1;
            }
            else{
                s=mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
      // Calling and returning both the function here
return {lowerBound(nums, target) ,upperBound(nums,target) };
    }
};