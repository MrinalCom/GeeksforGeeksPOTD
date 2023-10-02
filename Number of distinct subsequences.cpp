int mod = 1e9+7;
    
    int distinctSubsequences(string s)
    {
        int n = s.size();
        int dp[n+1] = {0};
        
        dp[0] = 1;
        map<int, int>mp;
        
        for(int i=1; i<=n; i++)
        {
            dp[i] = (dp[i-1]*2)%mod;
            
            if(mp[s[i-1]]) dp[i] = (dp[i]-dp[mp[s[i-1]]-1]+mod)%mod;
            mp[s[i-1]] = i;
        }
        
        return dp[n];
