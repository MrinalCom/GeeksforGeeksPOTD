vector<int> ans;
        int eindex = n/2; 
        
        for(int i = 0; i < n/2; i++){
 
            ans.push_back(arr[i]);
            ans.push_back(arr[eindex]);
            eindex++;
            
        }
        
        for(int i = 0; i < n; i++){
            
            arr[i] = ans[i];
