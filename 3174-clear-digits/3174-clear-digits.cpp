class Solution {
public:
    string clearDigits(string s) {
        int i=0;
        string ans="";
        while(i<s.length()){
            if(!isdigit(s[i])){   //checking if the string doesn't contains digits 
                ans+=s[i];
                i++;
            }else{                // If it contains digit just empty the ans string 
                i++;
                if(ans.size()>=1)
                ans.pop_back();
            }
        }
        return ans; 
    }
};