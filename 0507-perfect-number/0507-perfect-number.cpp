class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        if(num <= 1) return false;

        int sum = 1;  // 1 is a divisor for any number
        for(int i=2; i<=num/2; ++i){
            if(num % i == 0){   // To check the divisors
                sum += i;
            }
        }

        return sum == num;
    }
};