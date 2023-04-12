int count=0;
        for(int i=0;i<n/2;i++){
            for(int j=n/2;j<n;j++){
                if(arr[i]>=5*arr[j])
                    count++;
                else
                    continue;
            }
        }
        return count;
