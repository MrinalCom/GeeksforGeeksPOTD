sort(arr.begin(), arr.begin()+n/2);
        sort(arr.begin()+n/2, arr.end());
        
        for(int j=n/2;j<n;j++) arr[j]=arr[j]*5;
        
        int i=0 ,j= n/2;
        int ans=0;
        
        while(i< n/2 and j<n ){
            if(arr[i]>= arr[j]){
                ans+=n/2-i;
                j++;
            }
            else
            i++;
        }
        return ans;
        
