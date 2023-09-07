class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        if (start == end) return 0;

        queue<pair<int, int>> q;
        bool visited[100000] = {false};
    
        q.push({start, 0});
        visited[start] = true;
        
       
    
        while (!q.empty()) {
            
            
            auto current = q.front();
            q.pop();
    
            for (int num : arr) {
                int next = current.first * num;
    
                if (next >= 100000) { 
                    next %= 100000;
                }
    
                if (next == end) return current.second + 1;
    
                if (!visited[next]) {
                    visited[next] = true;
                    q.push({next, current.second + 1});
                }
            }
            
            
        }
    
        return -1;
    }
};
