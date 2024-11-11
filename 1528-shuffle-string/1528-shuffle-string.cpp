class Solution {
public:
    string restoreString(string s, vector<int>& indices) {

        vector<char>temp(s.length());

        for(int i=0; i<s.length(); i++){
            temp[indices[i]] = s[i];
        }

        string ans;
        for(int i=0; i<temp.size(); i++){
            ans.push_back(temp[i]);
        }
        return ans;
    }
};