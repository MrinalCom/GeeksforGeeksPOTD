vector<vector<int>>ans;
	    
	    int n = grid.size();
	    int m = grid[0].size();
	    vector<vector<int>>vis(n,vector<int>(m,0));
	    for(int i = 0 ; i<n ;i++){
	        for(int j = 0 ;j < m ; j++){
	            if(grid[i][j]==word[0]){
	                if(word.length()==1){
	                    ans.push_back({i,j});
                        vis[i][j] = 1;
                        continue;
	                }
	                int delrow[] = {0,-1,-1,-1,0,1,1,1};
                    int delcol[] = {-1,-1,0,1,1,1,0,-1};
                     for(int p = 0 ;p<8;p++){
                        int nr = i + delrow[p];
                        int nc = j + delcol[p];
                        if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==word[1]){
                            if(dfs(nr,nc,grid,word,n,m,2,delrow[p],delcol[p])==true && !vis[i][j]){
                                ans.push_back({i,j});
                                vis[i][j] = 1;
                            }
                        }
                    }
	                
	            }
	        }
	    }
	    return ans;
