 int prev = arr[0];
        int prev2 = 0;
        for(int i=1;i<n;i++) {
            int take = arr[i];
            if(i>1) {
                take += prev2;
            }
            int notTake = 0 + prev;
            int curr = max(take,notTake);
            prev2 = prev;
            prev = curr;
        }
        return prev;
