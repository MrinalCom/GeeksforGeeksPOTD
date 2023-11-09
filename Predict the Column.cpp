int sum=0;
        int index=-1;
        for(int j=0;j<N;j++){
            int zero=0;
            for(int i=0;i<N;i++){
                if(arr[i][j]==0){
                    zero++;
                }
                
            }
            if(zero>sum){
                sum=zero;
                index=j;
            }

            
            
        }
        return index;
