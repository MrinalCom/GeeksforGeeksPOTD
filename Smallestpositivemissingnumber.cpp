int missingNumber(int arr[], int n) 
    { 
        // Your code here
       
        for(int i=0;i<n;i++){
            int element=arr[i];
            
            if(element>=1 && element<=n){
                int chair=element-1;
                if(arr[chair]!=element){
                    swap(arr[chair],arr[i]);
                    i--;
            }
            }
        }
        for(int i=0;i<n;i++){
            if(i+1!=arr[i])
                return i+1;
        }
        return n+1;
