class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     unordered_map<int,int> map;

      // Traverse the input vector and populate the map with number frequencies
     for(auto i:nums){
        map[i]++;
     }

    vector<int> ans;
     for(auto i: map){
        if(i.second>=2){
            ans.push_back(i.first);  // Add the number to the result if it is a duplicate
        }
     }

     return ans;
    }
};