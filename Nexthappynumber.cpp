  int sum=0;
    int temp=0;
    int digit=0;
    while(sum!=1){
        N++;
        sum=N;
        for(int i=0;i<1000;i++){
            if(sum>1){
                temp=sum;
                sum=0;
                while(temp!=0){
                    digit=temp%10;
                    sum=sum+digit*digit;
                    temp=temp/10;
                }
            }
            else{
                return N;
            }
        }
    }
    return 0;
    }
};

