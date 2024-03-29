vector<int>r = {-1,0,1};
    vector<int>c = {1,1,1};
    
    int dfs(int row,int col,vector<vector<int>>&M,int n,int m,vector<vector<int>>&dp){
        int cost = 0;
        if(dp[row][col] != -1)return dp[row][col];
        for(int i = 0; i < 3; i++){
            int delrow = row+r[i];
            int delcol = col+c[i];
            if(delrow >= 0 && delcol >=0 && delrow < n && delcol < m){
                cost = max(cost,dfs(delrow,delcol,M,n,m,dp));
            }
        }
        return dp[row][col] = M[row][col]+cost;
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(m,-1));
        int ans = INT_MIN;
        for(int i = 0; i < n ; i++){
            ans = max(ans,dfs(i,0,M,n,m,dp));
        }
        return ans;
