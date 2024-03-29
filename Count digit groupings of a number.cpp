int n = str.length();
        vector<vector<int>>dp(n, vector<int>(1000, -1));
        return f(0, 0, str, dp);
    }
    int f(int i, int prevSum, string &s,vector<vector<int>> &dp) {
        int n = s.length();
        if (i == n) return 1;
        
        if(dp[i][prevSum]!=-1) return dp[i][prevSum];
        
        int ans = 0,currSum = 0;
        for (int k = i; k < n; k++) {
            currSum += s[k] - '0';
            if (currSum >= prevSum) {
                ans += f(k + 1, currSum, s, dp);
            }
        }
        
        return dp[i][prevSum] = ans;
