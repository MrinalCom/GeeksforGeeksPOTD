class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        int maxRight = a[n - 1]; 
        ans.push_back(maxRight);
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] >= maxRight) {
                maxRight = a[i];
                ans.push_back(maxRight);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};
