class Solution {
  public:
    int nthFibonacci(int n){
        // code here
       int mod = 1000000007;
        vector<int> memo(n + 1, -1);  
        
        return calculateFibonacci(n, memo, mod);
    }
    
    int calculateFibonacci(int n, vector<int>& memo, int mod) {
        if (n == 1 || n == 2) {
            return 1;
        }
        
        if (memo[n] != -1) {
            return memo[n];  
        }
        
        memo[n] = (calculateFibonacci(n - 1, memo, mod) % mod +
                   calculateFibonacci(n - 2, memo, mod) % mod) % mod;
        
        return memo[n];
    }
};
