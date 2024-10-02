class Solution {
public:
    bool isRemainingPalidrome(int l, int r, string s){
        while (r > l){
            if(s[l] == s[r]){
                l++;
                r--;
            } else {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
      int l = 0; 
        int r = s.length() - 1;
        while(r > l){
            if(s[l] == s[r]){
                l++;
                r--;
            } else {
                return isRemainingPalidrome(l + 1, r, s) || isRemainingPalidrome(l, r - 1, s);
            }
        }
        return true;   
    }
};