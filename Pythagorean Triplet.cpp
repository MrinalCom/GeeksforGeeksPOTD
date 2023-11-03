	  sort(arr, arr + n);
    for(int i=n-1; i>=2; --i){
            int j=0, k=i-1;
            while(j<k){
                if(arr[k]*arr[k]+arr[j]*arr[j]==arr[i]*arr[i]){
                    return true;
                }
                else if(arr[k]*arr[k]+arr[j]*arr[j]<arr[i]*arr[i]){
                    ++j;
                }else{
                    --k;
                }
            }
        }
        return false;
