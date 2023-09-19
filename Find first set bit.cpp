class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        if(n==0){
            return 0;
        }
        vector<int>ans;
        int number=n;
        while(number!=0){
            int rem=number%2;
            
            number=number/2;
            ans.push_back(rem);
        }
        // reverse(ans.begin(),ans.end());
        
        for(int i=0;i<ans.size();i++){
            if(ans[i]==1){
                return i+1;
            }
        }
    }
};
