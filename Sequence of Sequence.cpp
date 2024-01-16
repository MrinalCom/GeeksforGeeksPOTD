 int solver(int val,int ind,int m,int n){
        if(val>m)return 0;
        if(ind>=n-1)return val<=m;
        int ans=0;
        for(int i=2*val;i<m+1;i++){
            ans+=solver(i,ind+1,m,n);
        }
        return ans;
    }

int numberSequence(int m, int n){
        // code here
        int ans=0;
        for(int i=1;i<m+1;i++){
            ans+=solver(i,0,m,n);
        }
        return ans;

    }
