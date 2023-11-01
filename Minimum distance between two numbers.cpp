        int first=-1;
        int second=-1;
        int mindistance=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                first=i;
                if(second!=-1){
                    mindistance=min(mindistance,abs(first-second));
                }
            }
            if(a[i]==y){
                second=i;
                if(first!=-1){
                    mindistance=min(mindistance,abs(first-second));
                }
                
            }
        }
        if(first==-1 || second==-1){
            return -1;
        }
        else{
            return mindistance;
        }
