class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans;
        while(n){
            long long int temp = (n-1)%26;
            char ch = 'A'+ temp;
            ans = ch + ans;
            if(n==26)
                break;
            n = (n-1)/26;
        }
        return ans;
    }
};
