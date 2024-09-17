class Solution {
public:
    string removeKdigits(string num, int k) {
        // Simple intuition, Without using monotonic stack
        string result = ""; //this string will act like a stack
        int n = num.length();
        
        for(int i = 0; i < n; i++) {
            
            while(result.length() > 0 && result.back() > num[i] && k > 0) {
                result.pop_back(); 
                k--;
            }
            
            if(result.length() > 0 || num[i] != '0') {
                result.push_back(num[i]); //To avoid the case when we have preceeding zeros
            }
            
        }
        
        while(result.length() > 0 && k > 0) {
            result.pop_back();
            k--;
        }

        if(result == "") {
            return "0";
        }
        
        return result; 
    }
};