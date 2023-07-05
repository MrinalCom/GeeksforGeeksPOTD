 bool res= is_sorted(prices.begin(),prices.end());
        int max_profit=0;int min_price=INT_MAX;
        if(!res){
         for(int i=0;i<prices.size()-1;i++){
             if(prices[i]<prices[i+1]){
                 max_profit=max_profit+(prices[i+1]-prices[i]);
             }
         }
         return max_profit;
        }
        else{
        for(int i=0;i<prices.size();i++){
            min_price=min(prices[i],min_price);
            max_profit=max(max_profit,prices[i]-min_price);
        }}
        return max_profit; 
    }
};
