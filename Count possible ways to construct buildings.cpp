	    long bcount=1,scount=1;
	    int mod=1000000007;
	    for(int i=2;i<=N;i++){
	        long newbcount=scount;
	        long newscount=bcount%mod+scount%mod;
	        
	        bcount=newbcount;
	        scount=newscount;
	        
	    }
	    long total=bcount+scount;
	    return (int)(total%mod*total*mod)%mod;
