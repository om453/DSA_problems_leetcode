class Solution {
public:
    string makeGood(string s) {
        string result = "";

   //or for(char &ch : s) with no char ch = s[i];
    for (int i = 0; i < s.size(); i++) {   
    char ch = s[i];
    if(!result.empty() && (ch + 32 == result.back() || ch - 32 == result.back())) {
                result.pop_back();
            } else {
                result.push_back(ch);
            }
        }

        return result;
    }
};