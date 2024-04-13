class Solution {
public:
    string reverseOnlyLetters(string s) {
        int low = 0;
        int high = s.length()-1;
        while(high>=low){
            if(isalpha(s[low]) && isalpha(s[high])){    //using the isalpha() function for check if botha characters are alphabetic
                swap(s[low],s[high]);
                low++;
                high--;
            }
            else if (!isalpha(s[low])){      // If the character at index low is not an alphabetic character
                low++;
            }
            else{                          // If the character at index high is not an alphabetic character
                high--;
            }
        }
        return s;
    }
};