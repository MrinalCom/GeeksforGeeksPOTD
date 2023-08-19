vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
       if(s == 0)
       return {-1};
        int left = 0, right = 0;
        long long curr = 0;
        
        while(right<=n){
            if(curr == s){
                return {left+1,right};
            }
            else if(curr<s){
                curr += arr[right];
                right++;
            }else if(curr>s){
                curr -= arr[left];
                left++;
            }
            
        }
        return {-1};
    }
