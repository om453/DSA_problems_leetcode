class Solution {
public:
    int lengthOfLastWord(string s) {
         reverse(s.begin(),s.end());
        int count=0;
        for(int i = 0; i < s.length(); ++i)   // can also use range based loop -> char c:s
        {
            char c = s[i];  //Array of character
            if(c==' ' && count==0)
            {
                continue;
            }
            else if(c==' ' && count>0)
            {
                break;
            }
            else
            {
                count++;
            }
        }
        return count;
    }
};