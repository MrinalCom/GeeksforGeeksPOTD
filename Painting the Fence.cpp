long long mod=1e9+7;
if(n==1)return k;
        long long a=k;
        // long long K=k;
        long long b=(1LL*k*(k))%mod;
       
        for(int i=3;i<=n;i++){
            
            long long ans=((a*(k-1))%mod+(b*(k-1))%mod)%mod;
            a=b;
            b=ans;
        }
       return b;
