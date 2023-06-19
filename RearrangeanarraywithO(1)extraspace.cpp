        int i;
        long long mx=n; 
        for(i=0;i<n;i++){
            arr[i]=arr[i]+(arr[arr[i]]%mx)*mx;
        }
        for(i=0;i<n;i++){
            arr[i]/=mx;
        }
