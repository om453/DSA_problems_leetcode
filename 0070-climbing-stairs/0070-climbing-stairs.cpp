class Solution {

    //By Recursion with Memo Approach : Top Down
public:
    int t[46];
    int solve(int n){
        if(n == 0 || n == 1 || n == 2)
            return n;
        
        if(t[n] != -1)
            return t[n];
        
        int a = solve(n-1);
        int b = solve(n-2);
        
        return t[n] = a+b;
        
    }
    int climbStairs(int n) {
        memset(t, -1, sizeof(t));
        return solve(n);
    }
};

