int prime(int n){
        int ans=0;
        for(int i=2;i*i<=n;i++){
            while(n%i==0){
                ans++;
                n=n/i;
            }
        }
        if(n!=1){
            ans++;
        }
        return ans;
    }

	int sumOfPowers(int a, int b){
	    // Code here
	    int count=0;
	    for(int i=a;i<=b;i++){
	        count+=prime(i);
	    }
	    return count;
	}
