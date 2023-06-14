long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<int> q;
        for(int i=0;i<N;i++)
            q.push(A[i]);
        long long count=0;
        while(!q.empty() && K--){
            count+=q.top();
            q.push(q.top()/2);
            q.pop();
        }
        return count;
    }
   
