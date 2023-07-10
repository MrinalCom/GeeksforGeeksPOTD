  void transpose(vector<vector<int> >& matrix, int n)
    { 
        vector<vector<int>> transposedMatrix(n, vector<int>(n, 0)); 
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                 transposedMatrix[i][j] = matrix[j][i];  
        }
    }
    
    matrix = transposedMatrix;
    }
};
