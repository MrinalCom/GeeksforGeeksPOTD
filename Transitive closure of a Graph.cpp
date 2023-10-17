        //floyd warsall algo
        for(int via=0; via<N; via++){
            for(int i=0; i<N; i++){
                for(int j=0; j<N; j++){
                    if(i==j){
                        graph[i][j] = 1;
                    }
                    if(graph[i][j]==0 && graph[i][via]==1 && graph[via][j]==1){
                        graph[i][j] = 1;
                    }
                }
            }
        }
        return graph;
