class Solution{
    public:
    //You need to complete this fucntion
    const long int mod=1e9 + 7;
    long long solve(int n,int r){
        if(r==0) return 1;
        else if(r==1) return n;
        long long int ans=solve(n,r/2);
        long long square=(ans*ans)%mod;
        
        return r&1?(square*n)%mod: square;
    }
    
    long long power(int N,int R)
    {
        
      return solve(N,R);
        
    }

};
