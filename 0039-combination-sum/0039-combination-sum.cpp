class Solution {
public:

   void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds)
   {
    if (ind == arr.size()) {
        if (target == 0) {
          ans.push_back(ds);
        }
        return;
    }

      // if we pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds); //recursion call
        ds.pop_back();
      }

      // if we not pick up the element 
      findCombination(ind + 1, target, arr, ans, ds); //recursion call

   }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector < vector < int >> ans;
      vector < int > ds;
      findCombination(0, target, candidates, ans, ds);
      return ans;   
    }
};