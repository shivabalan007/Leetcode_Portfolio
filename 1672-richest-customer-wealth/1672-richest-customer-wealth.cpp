class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int n=acc.size();
        int m=acc[0].size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=acc[i][j];
                if(sum>maxi){
                    maxi=sum;
                }
            }
        }
        return maxi;
    }
};