class Solution {
public:
    int minLength(string s) {
        // Using Stack
        stack<char> charStack;
        for (char currentChar : s) {
            if (!charStack.empty() && 
                ((charStack.top() == 'A' && currentChar == 'B') || 
                 (charStack.top() == 'C' && currentChar == 'D'))) {
                charStack.pop(); // Remove the matching pair
            } else {
                charStack.push(currentChar); // Add remaining characters to stack
            }
        }
        return charStack.size(); // Remaining size in the stack
    } 
};