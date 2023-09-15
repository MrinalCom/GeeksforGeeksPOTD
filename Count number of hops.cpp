class Solution
{
    public:
    
    long long countWays(int N)
    {
        
         vector<long long>dp(N+3,0);
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
        if(N<=3){
            return dp[N];
        }
        int MOD=1e9+7;
        for(int i=4;i<N+3;i++){
            dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%MOD;
        }
        return dp[N];
        
    }
};
