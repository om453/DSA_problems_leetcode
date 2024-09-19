class Solution {
public:
  int countPrimes(int n) {
    // Array of bool
    vector<bool> prime(n+1, true);
    int ans = 0;
    for(int i = 2; i*i < n; i++) {
        if(prime[i]) {
            for(int j = i*i; j < n; j+=i) {
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i < n; i++) {
        if(prime[i]) ans++;
    }
    return ans;
  }
};