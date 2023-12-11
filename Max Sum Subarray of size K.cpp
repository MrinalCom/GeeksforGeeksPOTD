 long ans = 0;
        for(int i=0; i<K; i++){
            ans += Arr[i];
        }
        
        long maxi = ans;
        for(int i=K; i<=N; i++){
            if(maxi < ans){
                maxi = ans; 
            }
            ans -= Arr[i-K];
            ans += Arr[i];
        }
        
        return maxi;
