vector<int>v(arr.begin(),arr.end());
        sort(v.begin(),v.end());
        unordered_map<long long,long long>mp;
        long long sum=0;
        for(int i=0;i<n;i++) {
            mp.insert({v[i],sum});
            sum+=v[i];
        }
        vector<long long>ans;
        for(int i=0;i<n;i++) ans.push_back(mp[arr[i]]);
        return ans;
