 vector<int>ans(n,-1);
        unordered_set<int>us;
        ans[0] = 0;
        for(int i=1;i<n;i++){
            int prev = ans[i-1];
            if(prev - i > 0 && us.find(prev - i) == us.end()){
            ans[i] = prev -i;
            }
            else ans[i] = prev+i;
            
            us.insert(ans[i]);
        }
        return ans;
