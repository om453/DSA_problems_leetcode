class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        for(int i=n-1; i>=0; i--)
        {
if((num[i] - '0')%2 !=0){          //(num[i] - '0') will convert the string to                                         integer
    return num.substr(0 , i+1);
                 } 
        }
        
        return "";
    }
};