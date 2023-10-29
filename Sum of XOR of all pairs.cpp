long long int ans=0;
    	for(int i=0;i<=30;i++){
    	    int prev1=0;
    	    for(int j=n-1;j>=0;j--){
    	        if(((arr[j]>>i)&1)){
    	            ans+=(1ll<<i)*((n-1-j)-prev1);
    	            prev1++;
    	        }
    	        else{
    	            ans+=(1ll<<i)*(prev1);
    	        }
    	    }
    	}
    	return ans;
