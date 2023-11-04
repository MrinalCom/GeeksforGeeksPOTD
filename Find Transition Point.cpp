int transitionPoint(int arr[], int n) {
        // code here
        int index=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                return i;
            }
        }
        return index;
    }
