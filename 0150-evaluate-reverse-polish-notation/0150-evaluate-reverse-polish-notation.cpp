class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int result = 0;
        
        // Using fancy Lambda on unordered_map
        unordered_map<string, function<int (int, int)> > mp = {
            {"+", [](int a, int b) {return a + b; } },
            {"-", [](int a, int b) {return a - b; } },
            {"*", [](int a, int b) {return (long)a * (long)b; } },
            {"/", [](int a, int b) {return a / b; } },
        };
        
        for(const string& s:tokens) {
            if(s == "+" || s == "-" || s == "*" || s == "/") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                
                // This line fetches the correct operator function from the mp map based on the current s (operator symbol).
                result = mp[s](a, b);
                st.push(result);
            } else {
                st.push(stoi(s));   // stoi() is a C++ standard library function that converts a string (s) to an integer.
            }
        }
        return st.top(); 
    }
};