class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int curr_prod=1;          //curr_prod = current product
        int  max_prod = INT_MIN;  //max_prod = current product

// moving left to right in nums array
for(int i=0; i<n; i++){
    curr_prod = curr_prod*nums[i];
    max_prod = max(curr_prod , max_prod);
    
    if(curr_prod == 0){
        curr_prod = 1;
    }
}

// moving right to left in nums array
curr_prod=1;
for(int i=n-1; i>=0; i--){
    curr_prod = curr_prod*nums[i];
    max_prod = max(curr_prod , max_prod);
    
    if(curr_prod == 0){
        curr_prod = 1;
    }
}

return max_prod;

    }
};