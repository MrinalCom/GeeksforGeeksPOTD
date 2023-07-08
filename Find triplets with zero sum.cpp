sort(arr, arr+n);
        for(int i =0; i<n-2;i++){
              int j = i +1;
              int z = n-1;
              while(z>j){
                    if(arr[i] + arr[j] + arr[z] ==0 )return true;
                
                else if(arr[i] + arr[j] + arr[z]<0){
                    j++;
                }
                else
                z--;
              }
        }

        return false;
