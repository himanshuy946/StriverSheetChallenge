#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int ans = 0;
    int buy = prices[0];
    for(int i=0;i<prices.size();i++){
        buy = min(buy,prices[i]);
        int sell = prices[i]-buy;
        ans = max(ans,sell);
    }
    return ans;
