  int total=0;
       vector<int>ans(n,1);
       for(int i=1;i<n;i++){
           if(a[i]>a[i-1]&&ans[i]<=ans[i-1]){
               ans[i]=ans[i-1]+1;
           }
       }
       for(int i=n-2;i>=0;i--){
           if(a[i]>a[i+1] &&ans[i]<=ans[i+1]){
               ans[i]=ans[i+1]+1;
           }
       }
       for(int i=0;i<n;i++){
           total+=ans[i];
       }
        return total;
        
        // code here