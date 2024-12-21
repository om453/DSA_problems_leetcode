class Solution {
public:
    bool isPerfectSquare(int num) {
    if(num == 1) return true;
        for (long i = num / 2; i > 0; i--)
            if((i * i) == num) return true;
        return false;
    }
};