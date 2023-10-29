vector<int>ans;
        while(n!=0){
            int rem=n%2;
            ans.push_back(rem);
            n=n/2;
        }
        int m=ans.size()-1;
        
            if(ans[k]==1 && m>=k){
                return true;
            }
            else
                return false;
