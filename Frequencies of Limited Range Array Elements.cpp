for(int i=0;i<N;i++){
            if(arr[i]>0){
                int tmp=arr[i];
                arr[i]=-1;
                while(tmp>0 && tmp<=N){
                   int t=arr[tmp-1];
                   if(arr[tmp-1]>0) arr[tmp-1]=-1;
                   arr[tmp-1]--;
                   tmp=t;
                }
            }
        }
        
        for(int i=0;i<N;i++){
            arr[i]++;
            arr[i]*=-1;
        }
