class Solution
{
public:
    vector<string> result;

    void solve(int idx, string digits, string &temp, unordered_map<char, string> &mp)
    {
        // Base case: if the current index is equal to the length of the digits string
        if (idx >= digits.length()){  // idx is index for eg- "23"
            result.push_back(temp);
            return;
        }

        char ch = digits[idx]; // Get the current digit
        string str = mp[ch];   // Get the corresponding string of letters for the current digit
        for (int i = 0; i < str.length(); i++)
        { // i is index for str

            temp.push_back(str[i]);           // Add the current letter to the temporary string (Do)
            solve(idx + 1, digits, temp, mp); // Recurse for the next digit (Explore)
            temp.pop_back();                  // Remove the last added letter to backtrack (Undo)
        }
    }

    vector<string> letterCombinations(string digits)
    {
        if (digits.length() == 0)
            return {};

        // unordered map named mp of key as char and value as string
        unordered_map<char, string> mp;

        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        string temp = "";

        solve(0, digits, temp, mp); // recursion call

        return result;
    }
};