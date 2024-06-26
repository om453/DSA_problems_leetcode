class Solution {
public:

double solve(double x , long n){
    // By using resursive approach 
     if(n==0) return 1;

    // for negative case
    if (n<0){
        return solve(1/x , -n);
    }

    // for even case 
    if(n%2 == 0){
    return solve(x*x , n/2);   //binary exponentiation
    }

    // for odd case 
    return x*solve(x*x , (n-1)/2);
}


    double myPow(double x, int n) {
      
      return solve( x , (long)n );
    }
};