class Solution {
public:
    
    void generateCombinations(vector<string> &v, int n, int oc, int cc, string s){
        //Using resursive approach
        //base case
        if(oc == n && cc == n){
            v.push_back(s);
            return;
        }
        
        if(oc < n){
            generateCombinations(v, n, oc + 1, cc, s+"(");
        }
        
        if(cc < oc){
            generateCombinations(v, n, oc, cc + 1, s+")");
        }
    
    }
    
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> v;
        int oc = 0, cc = 0;
        generateCombinations(v, n, oc, cc, "");
        return v;
    }
};