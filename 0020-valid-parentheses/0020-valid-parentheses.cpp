class Solution {
public:
    bool isValid(string s) {
        stack<char>st;           // declaration of stack st

        for(int i=0;i<s.size();i++){
           if(st.empty()){
               st.push(s[i]);
           }
           else if( (st.top()=='(' && s[i]==')') || (st.top()=='[' && s[i]==']') || (st.top()=='{' && s[i]=='}')){
               st.pop();  // poping out brackets ensures that we maintain the correct order of brackets and remove them from consideration, making it easier to track unmatched brackets.
           }
           else{
               st.push(s[i]);
           }
        }

        if(st.empty()){   
        return true;
        }
    
        return false;
        
    }
};