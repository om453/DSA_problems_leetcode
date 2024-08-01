class Solution {
public:
    bool isPowerOfTwo(int n) {
        // By bit manipulation 
        if (n <= 0) return false; // Ensure n is positive
        return (n & (n - 1)) == 0; // Check if n is a power of two
    }
};

//-----------------------------------------------------------------------------------------------


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n%2==1) return false;
        if(n<1) return false;

       // By simple recursive approach
        return isPowerOfTwo(n/2);

    }
};
