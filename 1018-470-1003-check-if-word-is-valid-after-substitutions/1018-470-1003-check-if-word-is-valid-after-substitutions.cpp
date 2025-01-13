class Solution {
public:
    bool isValid(string s) {
     // First character should be always a
        if(s[0]!='a') return false; 
        // creating a stack
        stack<char>st;
        for(char ch:s){
            // if a is there we will push it into stack
            if(ch=='a') st.push(ch);
            // if b is the next character and if the top of stack is a then only we will push it
            else if(ch == 'b'){
                if (!st.empty() && st.top()=='a'){
                    st.push(ch);
                }
                else return false;
            } 
            // now if remaining char is c so if top is b we will pop it and again check top if it is a again pop it
            else{
                if(!st.empty() && st.top()=='b'){
                    st.pop();
                    if(!st.empty() && st.top()=='a'){
                        st.pop();
                    }
                    else return false;
                } 
                else return false;
            } 
        }
        // if stack is empty then word is valid else not
        return st.empty();    
    }
};