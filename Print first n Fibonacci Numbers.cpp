vector<long long >v(n,1);
        for(long long int i=2;i<n;i++){
            v[i]=v[i-1]+v[i-2];
        }
        return v;
