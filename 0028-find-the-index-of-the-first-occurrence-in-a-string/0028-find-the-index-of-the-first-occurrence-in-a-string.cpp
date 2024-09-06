class Solution {
public:
    int strStr(string s1, string s2) {  // s1-> haystack and s2 -> needle
        int m = s1.length();
        int n = s2.length();
        
        for(int i = 0; i <= m-n; i++) { //for haystack
            
            for(int j = 0; j < n; j++) { //for needle
                
                if(s1[i+j] != s2[j])
                    break;
                
                if(j == n-1)
                    return i;
                
            }
            
        }
        
        return -1;
    }
};