vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(X[i] == Y[j])    dp[i+1][j+1] = dp[i][j] + 1;
                else    dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
        
        return (m+n-dp[m][n]);
