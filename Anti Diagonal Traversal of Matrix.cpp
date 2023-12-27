int n = mat.length;
        int[] ans = new int[n*n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                ans[count++] = mat[j][i - j];
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = i; j < n; j++) {
                ans[count++] = mat[j][n-j+i-1];
            }
        }
        return ans;
