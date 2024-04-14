class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0 , right = s.size()- 1;
while(left<right){
    if(!isalnum(s[left])){    // isalnum() function to check whether a character is an alphanumeric character
        left++;
    }
    else if(!isalnum(s[right])){
        right--;
    }

    else if(tolower(s[left]) != tolower(s[right])){   //Checking for Palindrome Property
        return false;
    }
    else{
        left++;
        right--;
    }
}

return true;
    }
};