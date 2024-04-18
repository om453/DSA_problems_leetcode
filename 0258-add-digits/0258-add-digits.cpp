class Solution {
public:
    int addDigits(int num) {
        int ans;
        ans = (num - 1) % 9 + 1;   // Mathematical logical expression to find digit root
        return ans;
    }
};



// -> This is the recursive approach to solve this question
​class Solution {
public:
    int addDigits(int num) {
      int sum=0;
        while(num)
        {
            sum+=(num%10);
            num/=10;
        }
        if(sum<10)
            return sum;
        else
            return addDigits(sum);
    }
};
