    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto it:m){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
