int mod = 1e9+7;
    int func(Node *root, map <int, int>&mp, int k, int sum)
    {
        if(root == NULL) return 0;
        int ans = 0;
        if(mp.find(sum + root->data - k) != mp.end()) ans += mp[sum + root->data - k] % mod;
        mp[sum + root->data]++;
        ans += (func(root->left, mp, k, sum + root->data) % mod + func(root->right, mp, k, sum + root->data) % mod) % mod;
        mp[sum + root->data]--;
        return ans % mod;
    }
    
    int sumK(Node *root,int k)
    {
        // code here 
        map <int, int> mp;
        mp[0] = 1;
        return func(root, mp, k, 0);
    }
