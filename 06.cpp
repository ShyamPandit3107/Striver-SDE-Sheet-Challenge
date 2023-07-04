#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();
    int buy = INT_MAX,sell = 0;
    for(int i = 0; i<n; i++){
        if(prices[i]<buy){
            buy = prices[i];
        }
        sell = max(prices[i]-buy,sell);
    }
    return sell;
}