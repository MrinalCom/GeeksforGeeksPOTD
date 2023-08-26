class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n=str.length();
        string ans="";
        for(int i=n-1;i>=0;i--){
            ans+=str[i];
        }
        return ans;
    }
};
