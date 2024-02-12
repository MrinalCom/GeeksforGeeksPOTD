int mod=1e9+7;
long long cnt=1;
        long long ans=0;
        
        for(int i=0;i<n;i++){
            int j=0;
            long long temp=1;
            
            for(j=0;j<=i;j++){
               temp=(temp*(cnt+j))%mod;
            }
            cnt=cnt+j;
            ans=(ans+temp)%mod;
        }
        
        return ans;
