	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int mod = 1000000007;
	    vector<vector<int>> dp(n+1, vector<int> (sum+1, 0));
	    for(int i=0;i<=n;i++) dp[i][0] = 1;
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j =0; j<=sum;j++)
	        {
	            if(arr[i-1] <= j) dp[i][j] = (dp[i-1][j] + dp[i-1][j- arr[i-1]])%mod;
	            else dp[i][j] = dp[i-1][j]%mod;
	        }
	    }
	    return dp[n][sum];
	}
	  
