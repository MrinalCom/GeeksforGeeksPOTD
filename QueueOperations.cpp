class Solution{
    public:
    void insert(queue<int> &q, int k){
        q.push(k);
    }
    int findFrequency(queue<int> &q, int k){
        queue<int>q2=q;
        int count=0;
        while(!q2.empty()){
            if(q2.front()==k){
                count++;
            }
            q2.pop();
        }
        return count;
    }  
};
