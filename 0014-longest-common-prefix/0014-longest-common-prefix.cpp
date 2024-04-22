class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     string res = "";
     for(int i=0; i<strs[0].size(); i++){     
        for(auto s:strs){      // that means a string s from strs array
            if(s[i]!=strs[0][i]){     
                return res;
            }
        }
            res += strs[0][i];   // add result to the first element(string) of strs array
     }   
        return res;
    }
};