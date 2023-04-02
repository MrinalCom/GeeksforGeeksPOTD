/User function Template for C++

class Solution{
public:
    vector<vector<int>> dir = {{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
    
    void bfs(int x, int y, vector<vector<int>> &arr, vector<int> &coins){
        int n = arr.size();
        int m = arr[0].size();
        
        // int step = 0;
        
        queue<pair<int,int>> q;
        
        vector<vector<int>> visited(n,vector<int>(m,0));
        q.push({x,y});
        visited[x][y] = 1;
        
        while(!q.empty()){
            int size = q.size();
            int count = 0;   //count of coins in this step
            for(int i = 0; i<size;i++){
                auto it = q.front();
                q.pop();
                
                int curr_x = it.first;
                int curr_y = it.second;
             
                count += arr[curr_x][curr_y];
                
                for(int j=0; j<8; j++){
                    int newx = curr_x + dir[j][0];
                    int newy = curr_y + dir[j][1];
                    
                    if(newx>=0 && newx<n && newy>=0 && newy<m && !visited[newx][newy]){
                        visited[newx][newy] = 1;
                        q.push({newx,newy});
                    }
                }
            }
            
            coins.push_back(count); //storing count of coins for each step in coins vector            
        }
    }
    
    int knightInGeekland(int x,int y,vector<vector<int>> &arr){
        
        //first I have to find how many coins I can collect in each step, we can use bfs for that
        
        vector<int> coins;
        
        int n = arr.size();
        int m = arr[0].size();
        
        bfs(x,y,arr,coins);
        
        int maxi = INT_MIN, ans = 0;
   
        for(int i = 0;i<coins.size();i++){
            for(int j = i+coins[i] ; j<coins.size();j += coins[j]){
                if(coins[j] == 0) break; //This is MIMP condition
                coins[i] += coins[j];
            }
            
            if(coins[i]>maxi){
                maxi = coins[i];
                ans = i;
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,start_x,start_y;
        cin>>n>>m>>start_x>>start_y;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        Solution ob;
        cout<<ob.knightInGeekland(start_x,start_y,arr)<<endl;
    }
}
// } Driver Code Ends
