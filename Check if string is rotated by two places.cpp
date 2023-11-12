int n = a.size();
        int m = b.size();
        if(n!=m)
            return 0;
        if(n<=2){
            if(n==2 && a!=b)
                return 0;
            return 1;
        }
        int i = 0;
        for(i=2;i<n;i++){
            if(a[i]!=b[i-2])
                break;
        }
        if(i==n){
            if((a[0]==b[n-2]) && (a[1]==b[n-1]))
                return 1;
        } 
        i = 0;
        for(i=2;i<n;i++){
            if(a[i-2]!=b[i])
                break;
        }
        if(i==n){
            if((a[n-2]==b[0]) && (a[n-1]==b[1]))
                return 1;
            else
                return 0;
        }
        return 0;
