class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int pro=0;
        for(int i=0;i<n;i++){
            mini=min(mini,prices[i]);
            pro=max(prices[i]-mini,pro);
            
        }
        return pro;
    }
};