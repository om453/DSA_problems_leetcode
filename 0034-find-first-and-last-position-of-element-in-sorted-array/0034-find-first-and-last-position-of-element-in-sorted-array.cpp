class Solution {


  // using Binary search in the parts of lowerBond and upperBond 

     int lowerBound(vector<int>& arr, int target){
        int s=0;
        int e=arr.size()-1;
        int ans = -1;

        int mid = s + (e-s)/2;
        while(s<=e){
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

        int  mid = s + (e-s)/2;
        while(s<=e){
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
      
return {lowerBound(nums, target) ,upperBound(nums,target) };
    }
};