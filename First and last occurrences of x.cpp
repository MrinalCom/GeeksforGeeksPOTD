vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int>ans;
        for(int i=0;i<=n;i++){
            if(arr[i]==x){
                ans.push_back(i);
                break;
            }
            else if(i==n){
                ans.push_back(-1);
            }
        }
        
        for(int i=n-1;i>=0;i--){
            if(arr[i]==x){
                ans.push_back(i);
                break;
            }
            
            
                
        }
        if(ans[0]==-1){
                ans.push_back(-1);
            }
       
        return ans;
    }
