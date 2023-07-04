 int i=0,ct=0;
        long long prod=1;
        for(int j=0;j<n;++j){
            prod*=a[j];
            while(prod >= k && i <=j){
                prod/=a[i];
                i++;
            }
            ct+=(j-i+1);
        }
        return ct;
