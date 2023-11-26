class Solution{
    void printIncreasing(int N,vector<int> &ans){
        if(N<=0) return; 
        printIncreasing(N-5,ans);
        ans.push_back(N);
    }
    
    void printDecreasing(int N,vector<int> &ans){
        
        ans.push_back(N);
        if(N<=0) return;
        printDecreasing(N-5,ans);
    }
public:
    vector<int> pattern(int N){
        // code here
        vector<int>ans;
        printDecreasing(N,ans);
        printIncreasing(N,ans);
        return ans;
    }
};
